//
//  main.cpp
//  HeaderFiles
//
//  Created by Carl Turner on 23/7/18.
//  Copyright © 2018 Carl Turner. All rights reserved.
//

//Angled brackets are used to tell the compiler that we are
//including a header file that was included with the compiler.
//Use the non .h version of a library if it exists, and access the functionality through the std namespace
#include <iostream>
//double-quotes tell the compiler that this is a header file we are supplying, so it should look for that header file in the current directory containing our source code first
#include "add.h" //forward declaration. The add.h file is COMPILED with main.cpp.

//note add.cpp, which contains the add function implementation, is LINKED with main.cpp because it has .cpp extension
int main() {
    
    std::cout << "The sun of 3 and 4 is " << add(3,4) << std::endl;
    return 0;
}
