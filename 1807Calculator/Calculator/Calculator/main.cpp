//
//  main.cpp
//  Calculator
//
//  Created by Carl Turner on 23/7/18.
//  Copyright © 2018 Carl Turner. All rights reserved.
//

#include <iostream>

int getUserInput()
{
    std::cout << "Please enter an integer: ";
    int value;
    std::cin >> value;
    return value;
}

int getMathematicalOperation()
{
    std::cout << "Please enter which operator you want (1 = +, 2 = -, 3 = *, 4 = /): ";
    int op;
    std::cin >> op;
    //we'll ignore the possibility of an invalid character for now
    
    return op;
}

int calculateResult(int x, int op, int y)
{
    if(op == 1)
        return x+y;
    if(op == 2)
        return x-y;
    if(op == 3)
        return x*y;
    if(op == 4)
        return x/y;

    return x + y; //default to addition if there's an invalid operator entered
}

void printResult(int result)
{
    std::cout << "Your result is: " << result << std::endl;
}

int main() {
    
    int input1 = getUserInput();
    
    int op = getMathematicalOperation();
    
    int input2 = getUserInput();
    
    int result = calculateResult(input1, op, input2);
    
    printResult(result);
    
    return 0;
}
