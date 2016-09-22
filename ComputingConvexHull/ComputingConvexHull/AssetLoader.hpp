//
//  AssetLoader.hpp
//  ComputingConvexHull
//
//  Created by Harold Serrano on 9/20/16.
//  Copyright © 2016 haroldserrano.com. All rights reserved.
//

#ifndef AssetLoader_hpp
#define AssetLoader_hpp

#include <stdio.h>
#include <iostream>
#include <vector>
#include "tinyxml2.h"
#include "Model3D.hpp"

class AssetLoader {
    
private:
    
    /**
     @brief XML document read by the loader
     */
    tinyxml2::XMLDocument doc;
    
    /**
     @brief Name of the currently imported file
     */
    std::string currentLoadedFile;
    
protected:
    
    /**
     @brief Constructor for the digital asset loader
     */
    AssetLoader();
    
    /**
     @brief Destructor for the digital asset loader
     */
    ~AssetLoader();
    
    
public:
    
    /**
     @brief  Instance for the digital asset loader Singleton
     */
    static AssetLoader* instance;
    
    /**
     @brief  Shared Instance for the digital asset loader Singleton
     */
    static AssetLoader* sharedInstance();
    
    /**
     @brief Method which imports the asset file containing 3D asset information
     
     @param uFile Name of the file containing the 3D asset information
     
     @return Returs true if the file was successfully loaded into the engine
     */
    bool loadDigitalAssetFile(const char* uFile);
    
    /**
     @brief Method which loads all 3D asset information into the 3D model entity
     
     @param uModel  3D model entity
     */
    void loadAssetToMesh(Model3D *uModel);
    
    /**
     @brief Method which loads the 3D model PRE-Hull data. That is, data ready to be used to compute the Convex Hull of the model
     
     @param uModel      3D model entity
     @param uStringData string data containing the pre-hull data
     */
    void loadPreHullData(Model3D *uModel,std::string uStringData);
    
    
    /**
     @brief Method which converts a string value to float value
     
     @param uStringData string data
     @param uFloatData  float data
     */
    void stringToFloat(std::string uStringData,std::vector<float> *uFloatData);
    
    
    
};

#endif /* AssetLoader_hpp */
