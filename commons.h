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

const int commandsAmt = 2;

const std::string commandsDesc[commandsAmt] = {
  "uninstall - uninstall a package",
  "install - install a package"
};

const std::string commandsDB[commandsAmt] = {
  "USAGE for uninstall: \nshine uninstall <PACKAGE_NAME>",
  "USAGE for install: \nshine install <PACKAGE_NAME>"
};
