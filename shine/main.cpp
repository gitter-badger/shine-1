//
//  main.cpp
//  Shine package manager
//
//  Created by Varun Somashekar.
//  Copyright © 2018 Varun Somashekar. All rights reserved.
//

#include <iostream>
#include "commons.h"

int main(int argc, const char *argv[])
{
    // insert code here...
    std::cout << "Shinemanager version 0 (dev) \n";


    if (argc <= 2)
    {
        std::cout << "USAGE for shine \nAvailable commands: \n\n";
        for (size_t i = COMMANDS_AMT; i--;)
        {
            std::cout << COMMANDS_DESC[i] << "\n";
        }
        std::cout << std::endl;
    }
    if (argc == 3)
    {
        // Handle install or uninstall
        if (strcmp(argv[1], "install") == 0)
        {
            std::cout << "installing stuff..." << '\n';
            std::cin >> yesOrNo;

            for (std::string::size_type i=0; i<yesOrNo.length(); ++i)
                std::cout << std::tolower(yesOrNo[i],loc);

            // Check if input is yes or no
            if (yesOrNo == "yes") {
                // Commence install
                std::cout << "Commencing install process..." << '\n';
            }
            else if (yesOrNo == "y") {
                // Commence install
                std::cout << "Commencing install process..." << '\n';
            }
            else if (yesOrNo == "no") { 
                // Cancel install
                std::cout << "Canceling install. Goodbye!" << '\n';
            }
            else if (yesOrNo == "n") { 
                // Cancel install
                std::cout << "Canceling install. Goodbye!" << '\n';
            }
        }

    return 0;
}
}