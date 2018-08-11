//
//  main.cpp
//  CallStack
//
//  Created by Carl Turner on 24/7/18.
//  Copyright © 2018 Carl Turner. All rights reserved.
//

#include <iostream>

void CallC()
{
    std::cout << "C called" << std::endl;
}

void CallB()
{
    std::cout << "B called" << std::endl;
    CallC();
}

void CallA()
{
    CallB();
    CallC();
}

int main()
{
    CallA();
    
    return 0;
}
