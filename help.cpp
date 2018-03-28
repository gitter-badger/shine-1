//
//  help.cpp
//  PackMan
//
//  Created by Varun Somashekar on 3/28/18.
//  Copyright © 2018 Varun Somashekar. All rights reserved.
//

#include <iostream>
#include <array>
#include "commons.h"

int commandIndex;

extern std::string help(std::string command) {
    
    if (command == "all") {
        commandIndex = commandsDesc.size();
    } else if (command != "all") {
        
    }
    
    return commandsDesc[commandIndex];
}
