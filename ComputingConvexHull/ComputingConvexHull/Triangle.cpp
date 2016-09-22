//
//  Triangle.cpp
//  ComputingConvexHull
//
//  Created by Harold Serrano on 9/20/16.
//  Copyright © 2016 haroldserrano.com. All rights reserved.
//

#include "Triangle.hpp"


Triangle::Triangle():pointA(0.0,0.0,0.0),pointB(0.0,0.0,0.0),pointC(0.0,0.0,0.0){}

Triangle::Triangle(Point3n& uPointA, Point3n& uPointB, Point3n& uPointC){
    
    pointA=uPointA;
    pointB=uPointB;
    pointC=uPointC;
    
}

Triangle::~Triangle(){}

Triangle::Triangle(const Triangle& a):pointA(a.pointA),pointB(a.pointB),pointC(a.pointC){}

Triangle& Triangle::operator=(const Triangle& a){
    
    pointA=a.pointA;
    pointB=a.pointB;
    pointC=a.pointC;
    
    return *this;
}