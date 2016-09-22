//
//  Segment.hpp
//  ComputingConvexHull
//
//  Created by Harold Serrano on 9/20/16.
//  Copyright © 2016 haroldserrano.com. All rights reserved.
//

#ifndef Segment_hpp
#define Segment_hpp

#include <stdio.h>
#include "Point3n.hpp"

class Segment {
    
    
public:
    
    /*!
     @brief  3D endPoint of segment
     */
    Point3n pointA;
    
    /*!
     @brief  3D endPoint of segment
     */
    Point3n pointB;
    
    /**
     @brief Constructor which creates a segment with 3D points set to zero-components
     */
    Segment();
    
    /*!
     @brief  Constructor which creates a segment with the given 3D points
     */
    Segment(Point3n& uPointA,Point3n& uPointB);
    
    /*!
     @brief  Destructor of the class
     */
    ~Segment();
    
    /**
     @brief Copy constructor for the 3D segment
     */
    Segment(const Segment& a);
    
    /**
     @brief Copy constructor for the 3D segment
     
     @param a 3D segment to copy
     
     @return Returns a copy of the 3D segment
     */
    Segment& operator=(const Segment& a);
};
#endif /* Segment_hpp */
