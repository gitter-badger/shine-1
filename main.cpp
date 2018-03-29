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

    if (argc <= 1) {
      std::cout << "USAGE for shine \nAvailable commands: \n";
      for (size_t i = commandsAmt; i--;) {
        std::cout << commandsDesc[i] << "\n";
      }
    }

    return 0;
}
