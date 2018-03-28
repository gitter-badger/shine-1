//
//  main.cpp
//  PackMan
//
//  Created by Varun Somashekar on 3/28/18.
//  Copyright © 2018 Varun Somashekar. All rights reserved.
//

#include <iostream>
#include "help.cpp"

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "PackMan version 0 (dev)";
    
    if (argc == 0) {
        help("all");
    }
}
