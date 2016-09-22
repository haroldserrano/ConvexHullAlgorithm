//
//  main.cpp
//  ComputingConvexHull
//
//  Created by Harold Serrano on 9/20/16.
//  Copyright © 2016 haroldserrano.com. All rights reserved.
//

#include <iostream>
#include "AssetLoader.hpp"
#include "Model3D.hpp"
#include "ConvexHullAlgorithm.hpp"
#include "CommonProtocols.h"
#include "Logger.hpp"

int main(int argc, const char * argv[]) {
    
    //Asset loader singleton
    AssetLoader *loader=AssetLoader::sharedInstance();

    //create an instance of the model
    Model3D *model=new Model3D();

    //create an instance of the convex-hull algorithm
    ConvexHullAlgorithm convexHullAlgorithm;
    
    //create an instance of the logger
    Logger *logger=Logger::sharedInstance();
    
    //load the file into the loader
    if(loader->loadDigitalAssetFile("blenderFile.ch")){
        
        //if file found, load the prevertices data into the model's data member
        loader->loadAssetToMesh(model);
        
        //Compute the convex-hull of the model.
        CONVEXHULL convexHull=convexHullAlgorithm.computeConvexHull(model->vertices);
        
        //if the compute convex hull is successful, print its vertices
        if(convexHull.isValid){
            
            logger->log("Computation of the Convex-Hull was successful.");
            
            logger->log("Number of vertices in Convex-Hull: %d ",convexHull.vertex.size());
            
            logger->log("Vertices of Convex-Hull:");
            
            for(auto n:convexHull.vertex){
                
                logger->log("Vertex: %f, %f, %f", n.vertex.x, n.vertex.y, n.vertex.z);
            }
           
        }
    }

    
    
    return 0;
}
