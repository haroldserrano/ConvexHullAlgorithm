//
//  AssetLoader.cpp
//  ComputingConvexHull
//
//  Created by Harold Serrano on 9/20/16.
//  Copyright © 2016 haroldserrano.com. All rights reserved.
//

#include "AssetLoader.hpp"
#include "Logger.hpp"
#include <stdio.h>
#include <string.h>
#include <vector>
#include <sstream>

AssetLoader::AssetLoader(){
    
}

AssetLoader::~AssetLoader(){
    
}

AssetLoader* AssetLoader::instance=0;

AssetLoader* AssetLoader::sharedInstance(){
    
    if (instance==0) {
        instance=new AssetLoader();
    }
    
    return instance;
}


bool AssetLoader::loadDigitalAssetFile(const char* uFile){
    
    //if file exists, simply return. no need to load the file again
    std::string uStringFile(uFile);
    if (currentLoadedFile.compare(uStringFile)==0) {
        
        return true;
        
    }
    
    bool loadOk=doc.LoadFile(uFile);
    
    Logger *logger=Logger::sharedInstance();
    
    if (!loadOk) {
        
        logger->log("Success: Digital Asset File %s succesfully Loaded.",uFile);
        
        currentLoadedFile=uFile;
        
        loadOk=true;
        
    }else{
        
        logger->log("Error: Couldn't load Digital Asset File, No file %s exist.",uFile);
        
        currentLoadedFile.clear();
        
        loadOk=false;
    }
    
    return loadOk;
}

void AssetLoader::loadAssetToMesh(Model3D *uModel){
    
    tinyxml2::XMLNode *root=doc.FirstChildElement("Model");
    
    //Get Mesh ID
    tinyxml2::XMLElement *node=root->FirstChildElement("asset")->FirstChildElement("meshes");
    
    if (node!=NULL) {
        
        for (tinyxml2::XMLElement *child=node->FirstChildElement("mesh"); child!=NULL; child=child->NextSiblingElement("mesh")) {
            
            
            tinyxml2::XMLElement *preHullVertices=child->FirstChildElement("prehullvertices");
            
    
            if (preHullVertices!=NULL) {
                
                std::string data=preHullVertices->GetText();
                loadPreHullData(uModel, data);
            }
            
                        
    }

}
    
}

void AssetLoader::loadPreHullData(Model3D *uModel,std::string uStringData){
    
    std::vector<float> tempVector;
    
    stringToFloat(uStringData, &tempVector);
    
    for (int i=0; i<tempVector.size();) {
        
        float x=tempVector.at(i);
        
        float y=tempVector.at(i+1);
        
        float z=tempVector.at(i+2);
        
        Vector3n uPreHullVertices(x,y,z);
        
        uModel->vertices.push_back(uPreHullVertices);
        i=i+3;
        
    }
    
}

void AssetLoader::stringToFloat(std::string uStringData,std::vector<float> *uFloatData){
    
    std::stringstream stringToParse(uStringData);
    
    std::string outString;
    
    while (getline(stringToParse, outString, ' ')) {
        
        std::istringstream iss(outString);
        
        float c=stof(outString);
        
        uFloatData->push_back(c);
        
    }
    
}