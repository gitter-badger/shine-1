//
//  commons.h
//  PackMan
//
//  Created by Varun Somashekar on 3/28/18.
//  Copyright © 2018 Varun Somashekar. All rights reserved.
//
//  This file contains global variables
//

#include<iostream>

const int commandsAmt = 3;

std::string commandsDesc[commandsAmt] = {
  "install - install a package",
  "uninstall - uninstall a package",
  "unknown command specified."
};
