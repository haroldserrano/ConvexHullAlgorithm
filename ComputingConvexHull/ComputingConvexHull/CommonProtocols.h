//
//  CommonProtocols.h
//  ComputingConvexHull
//
//  Created by Harold Serrano on 9/20/16.
//  Copyright © 2016 haroldserrano.com. All rights reserved.
//

#ifndef CommonProtocols_h
#define CommonProtocols_h

#include "Vector3n.hpp"
#include "Segment.hpp"
#include "Triangle.hpp"
#include <vector>

//CONVEX HULL STRUCTURES
typedef struct CONVEXHULLVERTEXSTRUCT CONVEXVERTEX;
typedef CONVEXVERTEX *CONVEXHULLVERTEX;

typedef struct CONVEXHULLEDGESTRUCT CONVEXEDGE;
typedef CONVEXEDGE *CONVEXHULLEDGE;

typedef struct CONVEXHULLFACESTRUCT CONVEXFACE;
typedef CONVEXFACE *CONVEXHULLFACE;

/**
 @brief The CONVEXHULLVERTEXSTRUCT structure holds vertices information used for the construction of the convex-hull
 */
struct CONVEXHULLVERTEXSTRUCT{
    /**
     @brief Array containing the components of the vertex
     */
    float v[3];
    
    /**
     @brief total number of vertices
     */
    int vNum;
    
    /**
     @brief duplicate convex hull edge
     */
    CONVEXHULLEDGE duplicate;
    
    /**
     @brief Boolean variable which is used to flag the convex-hull algorithm that the vertex is on-Hull
     */
    bool onHull;
    
    /**
     @brief Boolean variable which is used to flag the convex-hull algorithm that the vertex has been processed
     */
    bool processed;
    
    /**
     @brief Pointer to the Next vertex
     */
    CONVEXHULLVERTEX next;
    
    /**
     @brief Pointer to the Previous vertex
     */
    CONVEXHULLVERTEX prev;
    
};

/**
 @brief The CONVEXHULLEDGESTRUCT structure holds edges information used during the construction of the convex-hull
 */
struct CONVEXHULLEDGESTRUCT{
    /**
     @brief Array of faces adjacent to the edge
     */
    CONVEXHULLFACE adjFace[2];
    
    /**
     @brief Array of endpoint vertices composing the edge
     */
    CONVEXHULLVERTEX endPts[2];
    
    /**
     @brief New face in convex-hull
     */
    CONVEXHULLFACE newFace;
    
    /**
     @brief Boolean variable which informs the convex-hull algorithm that the edge should be deleted
     */
    bool shouldDelete;
    
    /**
     @brief Pointer to the the Next edge
     */
    CONVEXHULLEDGE next;
    
    /**
     @brief Pointer to the Previous edge
     */
    CONVEXHULLEDGE prev;
};

/**
 @brief The CONVEXHULLFACESTRUCT structure holds faces information used during the construction of the convex-hull
 */
struct CONVEXHULLFACESTRUCT{
    /**
     @brief Array of edges composing the current face
     */
    CONVEXHULLEDGE edge[3];
    
    /**
     @brief Array of vertices composing the current face
     */
    CONVEXHULLVERTEX vertex[3];
    
    /**
     @brief Boolean algebra which informs the convex-hull algorithm that the face is seen by a point
     */
    bool visible;
    
    /**
     @brief Pointer to the Next face
     */
    CONVEXHULLFACE next;
    
    /**
     @brief Pointer to the Previous face
     */
    CONVEXHULLFACE prev;
};


/**
 @brief The POLYTOPEVERTEX structure holds a polytope vertex representation
 */
typedef struct{
    
    /**
     @brief 3D vertex representing the polytope vertex
     */
    Vector3n vertex;
    
}POLYTOPEVERTEX;

/**
 @brief The POLYTOPEEDGES structure holds a polytope edge representation
 */
typedef struct{
    
    /**
     @brief 3D segment representing a polytope segment
     */
    Segment segment;
    
}POLYTOPEEDGES;

/**
 @brief The POLYTOPEFACES structure holds a polytope face representation
 */
typedef struct{
    
    /**
     @brief 3D triangle representing a polytope face
     */
    Triangle triangle;
    
}POLYTOPEFACES;

/**
 @brief The CONVEXHULL structure holds data representing vertices, edges and faces for a computed convex-hull
 */
typedef struct{
    /**
     @brief Vector holding convex-hull vertices data
     */
    std::vector<POLYTOPEVERTEX> vertex;
    
    /**
     @brief Vector holding convex-hull edges data
     */
    std::vector<POLYTOPEEDGES> edges;
    
    /**
     @brief Vector holding convex-hull faces data
     */
    std::vector<POLYTOPEFACES> faces;
    
    /**
     @brief Boolean variable which informs if the computed convex-hull is valid
     */
    bool isValid;
    
}CONVEXHULL;

#endif /* CommonProtocols_h */
