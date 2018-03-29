//
//  main.cpp
//  PackMan
//
//  Created by Varun Somashekar on 3/28/18.
//  Copyright © 2018 Varun Somashekar. All rights reserved.
//

#include <iostream>
#include "help.cpp"

std::string returnAllCommands = help("all");

int main(int argc, const char * argv[]) {
    // insert code here...
    //std::cout << "Shinemanager version 0 (dev) \n";

    if (argc < 2) {
      std::cerr << "wveunivbnwi";
      return 1;
    }

    return 0;
}
