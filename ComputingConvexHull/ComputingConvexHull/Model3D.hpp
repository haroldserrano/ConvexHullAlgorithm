//
//  Model3D.hpp
//  ComputingConvexHull
//
//  Created by Harold Serrano on 9/20/16.
//  Copyright © 2016 haroldserrano.com. All rights reserved.
//

#ifndef Model3D_hpp
#define Model3D_hpp

#include <stdio.h>
#include "Vector3n.hpp"
#include <vector>

class Model3D {
    
public:

    std::vector<Vector3n> vertices;
    
    Model3D(){};
    
    ~Model3D(){};
    
};

#endif /* Model3D_hpp */
