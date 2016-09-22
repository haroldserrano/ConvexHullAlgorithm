//
//  Vector3n.hpp
//  ComputingConvexHull
//
//  Created by Harold Serrano on 9/20/16.
//  Copyright © 2016 haroldserrano.com. All rights reserved.
//

#ifndef Vector3n_hpp
#define Vector3n_hpp

#include <stdio.h>

class Vector3n {
    
private:

public:

    /**
     @brief  x vector component
     */
    float x;
    
    /**
     @brief  y vector component
     */
    
    float y;
    
    /**
     @brief  z vector component
     */
    
    float z;
    
    
#pragma mark-constructors
    
    /**
     @brief  Constructor which creates a default 3D vector. That is, it creates a vector with x, y and z components equal to zero.
     */
    Vector3n();
    
    
    /**
     @brief  Constructor which creates a 3D vector with x,y, and z components.
     
     @param nx x component
     @param ny y component
     @param nz z component
     
     @return Constructs a vector with the given x,y and z components
     
     */
    Vector3n(float nx,float ny,float nz);
    
    /**
     @brief  Default destructor of a vector
     */
    ~Vector3n();
    
    
    /**
     @brief  Copy Constructor for a 3D vector
     
     @param  3D vector to copy
     
     @return A copy of the 3D vector
     */
    Vector3n(const Vector3n& a);
    
    /**
     @brief  Copy Constructor for 3D vector
     
     @param  3D vector to copy
     
     @return A copy of the 3D vector
     */
    Vector3n& operator=(const Vector3n& a);
};

#endif /* Vector3n_hpp */
