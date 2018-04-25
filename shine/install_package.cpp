//
//  main.cpp
//  Shine package manager
//
//  Created by Varun Somashekar.
//  Copyright © 2018 Varun Somashekar. All rights reserved.
//

#include <iostream>
#include "commons.h"

void install_package(std::string package_name) {
  std::cout << "Item to install:" << '\n';
  std::cout << installItem << '\n' << "Continue? (Y/N) \n";
  
      // Detect OS for running install script.
      #ifdef _WIN32
        /* TODO: Implement #ifdef _WIN64 for detecting 32-bit and
         64-bit operating systems. */
        std::cout << "You're running Windows!" << '\n';
        std::cout << "Installing package " << package_name << '\n';
      #elif __APPLE__
        std::cout << "You're running macOS!" << '\n';
        std::cout << "Installing package " << package_name << '\n';
      #elif __linux__
        std::cout << "You're running Linux!" << '\n';
        std::cout << "Installing package " << package_name << '\n';
      #elif __unix__
        std::cout << "You're running UNIX!" << '\n';

        std::cout << "Unfortunately, Shine is not compatible with Unix." << '\n';
      #else
        std::cout << "Unknown OS version. Quitting." << '\n';
        return 0;
      #endif
  }
}
