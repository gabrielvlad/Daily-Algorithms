# Daily-Algorithms

This is a repository that I use for my Daily-Algorithms

https://cdn.jsdelivr.net/gh/gabrielvlad/assets-cdn@main/Daily-Algorthims/main_readme.webp

## Installation

To run this project locally, you will need to have the following installed:

- CLion 2023.1.1 can be found [here](https://www.jetbrains.com/clion/download/#section=windows)
- C/C+​+​ Single File Execution 1.3 can be found [here](https://plugins.jetbrains.com/plugin/8352-c-c--single-file-execution)

I use the following toolchains in CLion: MinGW(default)
Build,Execution,Deployment>Toolchains:

```
Name: MinGW
toolset: Bundled MinGW version w64 9.0
Cmake: Bundled version 3.25.2
    Build Tool: Detected ninja.exe
    C Compiler: Detected gcc.exe
    C++ Compiler: Detected g++.exe
Debugger: Bundled GDB Version 12.1
```

After installing the necessary dependencies, clone the repository to your local machine start doing algos

## Usage

The setup is pretty simple. To make another program all you need to do is create a new c++ executable than right click on the file and click "add to CmakeLists.txt" and then run the program. (if there is any problems with the program not running, check CmakeLists.txt and make sure the file name is correct and legal)

## Automation with shell script made by me

- create_new_cpp_file.sh - creates a new cpp file that it reads from keyboard and adds it to CmakeLists.txt

```
/******************************************************************************
Created by Gabe on $(date +%d/%m/%y).


*******************************************************************************/

#include <iostream>
using namespace std;
int main() {
    cout<<"Hello, world!";
    return 0;
}
```

### Note: It will gnerate a new file with a comment block section that has my nickname and the date of creation that is taken from the system, should be changed to your own name and date format(if non EU), if you want to use it.
