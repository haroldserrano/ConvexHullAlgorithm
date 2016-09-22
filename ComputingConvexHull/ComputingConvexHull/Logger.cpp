//
//  Logger.cpp
//  ComputingConvexHull
//
//  Created by Harold Serrano on 9/20/16.
//  Copyright © 2016 haroldserrano.com. All rights reserved.
//

#include "Logger.hpp"

Logger* Logger::instance=0;

Logger::Logger():debugMode(true){
}

Logger::~Logger(){
    
}

Logger* Logger::sharedInstance(){
    
    if (instance==0) {
        instance=new Logger();
    }
    
    return instance;
}

void Logger::log(const char* uLog, ...){
    
    if (debugMode==true) {
        
        char buffer[256];
        va_list args;
        va_start (args, uLog);
        vsprintf (buffer,uLog, args);
        
        std::cout<<buffer<<std::endl;
        
        va_end (args);
        
    }
}

void Logger::setDebugMode(bool uValue){
    debugMode=uValue;
}