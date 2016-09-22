//
//  Vector3n.cpp
//  ComputingConvexHull
//
//  Created by Harold Serrano on 9/20/16.
//  Copyright © 2016 haroldserrano.com. All rights reserved.
//

#include "Vector3n.hpp"

Vector3n::Vector3n(){
    
    x=0.0;
    y=0.0;
    z=0.0;
}

Vector3n::Vector3n(float nx,float ny,float nz):x(nx),y(ny),z(nz){}

Vector3n::~Vector3n(){}

Vector3n::Vector3n(const Vector3n& a):x(a.x),y(a.y),z(a.z){
    
}

Vector3n& Vector3n::operator=(const Vector3n& a){
    
    x=a.x;
    y=a.y;
    z=a.z;
    
    return *this;
    
}
