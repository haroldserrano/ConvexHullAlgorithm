//
//  Point3n.hpp
//  ComputingConvexHull
//
//  Created by Harold Serrano on 9/20/16.
//  Copyright © 2016 haroldserrano.com. All rights reserved.
//

#ifndef Point3n_hpp
#define Point3n_hpp

#include <stdio.h>

class Point3n {
    
private:
    
public:
    
    /**
     @brief x-component
     */
    float x;
    
    /**
     @brief y-component
     */
    float y;
    
    /**
     @brief z-component
     */
    float z;
    
    /**
     @brief Contructor which creates a default 3D point. That is, its componets are initialized to zero.
     */
    Point3n();
    
    /**
     @brief Contructor which creates a default 3D point with the given x, y and z component values.
     
     @param nx x-component
     @param ny y-component
     @param nz z-component
     */
    Point3n(float nx,float ny,float nz);
    
    /**
     @brief Destructor for the class
     */
    ~Point3n();
    
    /**
     @brief Copy constructor for the class
     @param a 3D point to copy to
     */
    Point3n(const Point3n& a);
    
    /**
     @brief Copy constructor for the class
     
     @param a 3D point to copy to
     
     @return returns a copy of the 3D point
     */
    Point3n& operator=(const Point3n& a);
    
};

#endif /* Point3n_hpp */
