#!/usr/bin/env bash
echo "This script will get Shine set up and installed on your computer."

# Check if g++ is installed
echo "Checking if g++ is installed"

if [ -f /usr/bin/g++ ]
then
  echo "g++ compiler found. Setting up your environment..."; &> git clone https://github.com/flash76/shine &> /dev/null
  cd shine

  # Compile Shine
  g++ -o shine main.cpp > "Compiling Shine"

  # Set up the environment
  export PATH=`pwd`:$PATH

  # List available repositories
  echo "available repositories: "
fi
