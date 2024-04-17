# CMake Journey

## Overview

This small project was realized to better understand how to organize a project developped in C++ and how to use CMake. It is made of three independant toy projects:

* ```smallProject``` corresponds to a project made up of just a few source files. It does not require much organization. It mainly uses CMake's ```add_executable()``` function.
* ```mediumProject``` corresponds to a project with more files, leading to organization into modules/libraries. It exploits CMake's ```add_executable()```, ```add_library()``` and ```target_link_libraries()``` functions.
* ```largeProject``` identical to ```mediumProject``` but with the use of third-party libraries found in the ```extern``` folder. It exploits CMake's ```add_executable()```, ```add_library()```, ```target_link_libraries()```, ```FetchContent_Declare()``` and ```FetchContent_MakeAvailable()``` functions.

For more information on CMake, please refer to :
* [Henry Schreiner's Introduction to Modern CMake](https://cliutils.gitlab.io/modern-cmake/)
* The file: ```notes.pdf``` (handwritten notes in French)

This project was realized in C++ and CMake.

## Installation

The installation process is straightforward: 
* Clone the repository.
* Add a ```build``` folder to the root of one of the three projects.
* Under Linux, use the following three commands:
  ```
  cmake -S . -B build
  cd build
  make
  ```
* Under Windows :
  * Open CMake :
    * Select as "where to find the source code", the project root folder, i.e. the one containing the ```CMakeLists.txt``` file.
    * Select as "where to build the binaries", the previously created build folder.
    * Click on "Configure" once, then a second time. Then click on "Generate". Finally, click on "Open Project".
  * If all goes well, Visual Studio will open automatically. In Visual Studio :
    * In the "Solution Explorer", select the "Solution".
    * In the "Properties" panel below, click on the key to open the properties page.
    * In the "Single startup project" drop-down list, select "app".
  * You should now be able to compile the project.
