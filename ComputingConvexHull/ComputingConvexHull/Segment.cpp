//
//  Segment.cpp
//  ComputingConvexHull
//
//  Created by Harold Serrano on 9/20/16.
//  Copyright © 2016 haroldserrano.com. All rights reserved.
//

#include "Segment.hpp"


Segment::Segment():pointA(0.0,0.0,0.0),pointB(0.0,0.0,0.0){
    
}

Segment::Segment(Point3n& uPointA,Point3n& uPointB){
    
    pointA=uPointA;
    pointB=uPointB;
}

Segment::Segment(const Segment& a):pointA(a.pointA),pointB(a.pointB){
    
}


Segment& Segment::operator=(const Segment& a){
    
    pointA=a.pointA;
    pointB=a.pointB;
    
    return *this;
    
}

Segment::~Segment(){
    
}