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

const int COMMANDS_AMT = 2;

const std::string COMMANDS_DESC[COMMANDS_AMT] = {
  "uninstall - uninstall a package: shine uninstall <PACKAGE_NAME>",
  "install - install a package: shine install <PACKAGE_NAME>"
};

const std::string COMMANDS_DB[COMMANDS_AMT] = {
  "uninstall",
  "install"
};

std::string installItem;
