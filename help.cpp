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

std::string returnVal;

std::string help(std::string command) {

    if (command == "all") {
        for (int i = 0; i == commandsAmt - 1; i++) {
          returnVal = commandsDesc[i];
        }
    } else if (command != "all") {

    }

    return returnVal;
}
