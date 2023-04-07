#!/bin/bash

# Define variables
project_name="9"
cmake_file="CMakeLists.txt"

# Prompt the user for a new file name
read -p "Enter a name for the new file: " filename

# Create the new file and write the header comments and initial C++ structure
touch "${filename}.cpp"
cat <<EOF > "${filename}.cpp"
/******************************************************************************
Created by Gabe on $(date +%d-%m-%y)


*******************************************************************************/

#include <iostream>
using namespace std;
int main() {
    cout<<"Hello, world!";
    return 0;
}
EOF

# Remove the "#" character and replace spaces with underscores in the filename
filename=${filename//#/}
filename=${filename// /_}

# Update the CMake configuration file to include the new file
echo "" >> "${cmake_file}"
echo "add_executable(${filename} \"#${filename//_/ }.cpp\")" >> "${cmake_file}"

# Print success message
echo "Created new C++ file '${filename}.cpp' and added it to '${cmake_file}'."

# Save and exit
exit 0
