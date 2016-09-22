//
//  Triangle.hpp
//  ComputingConvexHull
//
//  Created by Harold Serrano on 9/20/16.
//  Copyright © 2016 haroldserrano.com. All rights reserved.
//

#ifndef Triangle_hpp
#define Triangle_hpp

#include <stdio.h>
#include "Point3n.hpp"

class Triangle {

public:
    
    /**
     @brief 3D vertex point of the triangle
     */
   Point3n pointA;
    
    /**
     @brief 3D vertex point of the triangle
     */
    Point3n pointB;
    
    /**
     @brief 3D vertex point of the triangle
     */
    Point3n pointC;
    
    /**
     @brief Constructor which creates a 3D triangle with vertices all set to zero components
     */
    Triangle();
    
    /**
     @brief Constructor which creates a 3D triangle with the given vertex points
     */
    Triangle(Point3n& uPointA, Point3n& uPointB, Point3n& uPointC);
    
    /**
     @brief Destructor for the class
     */
    ~Triangle();
    
    /**
     @brief Copy constructor for the class
     */
    Triangle(const Triangle& a);
    
    /**
     @brief Copy constructor for the class
     
     @param a 3D triangle to copy to
     
     @return Returns a copy of the 3D triangle
     */
    Triangle& operator=(const Triangle& a);
};
#endif /* Triangle_hpp */
