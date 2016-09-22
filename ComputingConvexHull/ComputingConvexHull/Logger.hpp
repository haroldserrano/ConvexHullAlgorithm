//
//  Logger.hpp
//  ComputingConvexHull
//
//  Created by Harold Serrano on 9/20/16.
//  Copyright © 2016 haroldserrano.com. All rights reserved.
//

#ifndef Logger_hpp
#define Logger_hpp

#include <stdio.h>
#include <iostream>
#include <string>

/**
 @brief The Logger class implements messages notifications sent to the console log window
 */
class Logger {
    
private:
    
    /**
     @brief If set to true, the logger prints notifications to the console window.
     */
    bool debugMode;
    
protected:
    
    /**
     @brief Constructor for the Logger
     */
    Logger();
    
    /**
     @brief Destructor for the Logger
     */
    ~Logger();
    
public:
    
    /**
     @brief Instance for the U4DLogger Singleton
     */
    static Logger* instance;
    
    /**
     @brief Method which returns a instance of the U4DLogger Singleton
     
     @return Returns an instance of the U4DLogger
     */
    static Logger* sharedInstance();
    
    /**
     @brief Method which prints notifications to the console log window
     
     @param uLog Message to print
     @param ...  Message to print
     */
    void log(const char* uLog, ...);
    
    /**
     @brief Method which enables printing to the console window
     
     @param uValue Boolean value which enables printint to the console
     */
    void setDebugMode(bool uValue);
    
};


#endif /* Logger_hpp */
