//
//  main.cpp
//  Shine package manager
//
//  Created by Varun Somashekar.
//  Copyright © 2018 Varun Somashekar. All rights reserved.
//

#include <iostream>

void package_install(std::string package_name) {
  installItem = argv[2];
  std::cout << "Item to install:" << '\n';
  std::cout << installItem << '\n' << "Continue? (Y/N) \n";

  getline(std::cin, tolower(yesOrNo));

  // Check if input is yes or no
  switch (yesOrNo) {
    case "yes":
      // Commence install
      std::cout << "Commencing install process..." << '\n';
    case "y":
      // Commence install
      std::cout << "Commencing install process..." << '\n';
    case "no":
      // Cancel install
      std::cout << "Canceling install. Goodbye!" << '\n';
    case "n":
      // Cancel install
      std::cout << "Canceling install. Goodbye!" << '\n';
  }
}