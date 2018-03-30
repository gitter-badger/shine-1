//
//  main.cpp
//  Shinemanager
//
//  Created by Varun Somashekar on 3/28/18.
//  Copyright © 2018 Varun Somashekar. All rights reserved.
//

#include <iostream>
#include "commons.h"

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Shinemanager version 0 (dev) \n";

    if (argc <= 2) {
      std::cout << "USAGE for shine \nAvailable commands: \n\n";
      for (size_t i = commandsAmt; i--;) {
        std::cout << commandsDesc[i] << "\n";
      }
      std::cout << std::endl;
    }
    if (argc == 3) {
      // Handle install or uninstall
      if (strcmp(argv[1], "install") == 0) {

          std::cout << "installing stuff..." << '\n';
        // Detect OS for running install script.
        #ifdef _WIN32
          /* TODO: Implement #ifdef _WIN64 for detecting 32-bit and
           64-bit operating systems. */
          std::cout << "You're running Windows!" << '\n';
        #elif __APPLE__

          std::cout << "You're running macOS!" << '\n';

        #elif __linux__
          std::cout << "You're running Linux!" << '\n';
        #elif __unix__
          std::cout << "You're running UNIX!" << '\n';
        #else
          std::cout << "Unknown OS version. Quitting." << '\n';
          return 0;
        #endif
      }
    }

    return 0;
}
