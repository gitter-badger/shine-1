#!/usr/bin/env bash
echo "This script will get Shine set up and installed on your computer."

# Check if g++ is installed
echo "Checking if g++ is installed"

if [ -f /usr/bin/g++ ]
then
  echo "g++ compiler found. Setting up your environment..."; &> git clone https://github.com/flash76/shine &> /dev/null
  cd shine

  # Compile Shine
  echo "Compiling Shine"
  g++ -o shine shine/main.cpp
  mkdir bin
  mv shine bin/

  # List available repositories
  echo "available repositories: "

  # Finishing touches
  if [ "$OSTYPE" = "darwin17" ]
  then
    echo "macOS detected. Installing Shine into your account..."
    echo "export PATH=`pwd`/bin" >> ~/.bash_profile
    echo "Running updates to complete installation..."
  fi
fi
