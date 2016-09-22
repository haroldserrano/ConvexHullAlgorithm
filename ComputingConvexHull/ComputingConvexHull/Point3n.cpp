//
//  Point3n.cpp
//  ComputingConvexHull
//
//  Created by Harold Serrano on 9/20/16.
//  Copyright © 2016 haroldserrano.com. All rights reserved.
//

#include "Point3n.hpp"

Point3n::Point3n():x(0.0),y(0.0),z(0.0){}


Point3n::Point3n(float nx,float ny,float nz):x(nx),y(ny),z(nz){}

Point3n::~Point3n(){}

Point3n::Point3n(const Point3n& a):x(a.x),y(a.y),z(a.z){}


Point3n& Point3n::operator=(const Point3n& a){
    
    x=a.x;
    y=a.y;
    z=a.z;
    
    return *this;
    
}