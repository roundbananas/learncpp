//
//  main.cpp
//  1808BinaryDecimalConversion
//
//  Created by Carl Turner on 7/8/18.
//  Copyright © 2018 Carl Turner. All rights reserved.

/*  6) Write a program that asks the user to input a number between 0 and 255. Print this number as an 8-bit binary number (of the form #### ####). Don’t use any bitwise operators.
    http://www.learncpp.com/cpp-tutorial/37-converting-between-binary-and-decimal/
 */
// Plan: 1. ask for a number
// 2.
//

#include <iostream>

//x is our number to test
//pow is the power of 2
int printandDecrementBit(int x, int pow){
    //test if x is great than a power of 2 and print the bit
    if(x >= pow){
        std::cout << "1";
        //if x is >= the power of 2, subtract the power of 2
            return x - pow;
    }
    else{
        std::cout << "0";
        return x;
    }
}

int main(){
    std::cout << "Enter an integer between 0 and 255: ";
    int x;
    std::cin >> x;
    
    x = printandDecrementBit(x, 128);
    x = printandDecrementBit(x, 64);
    x = printandDecrementBit(x, 32);
    x = printandDecrementBit(x, 16);
    
    std::cout << " ";
    
    x = printandDecrementBit(x, 8);
    x = printandDecrementBit(x, 4);
    x = printandDecrementBit(x, 2);
    x = printandDecrementBit(x, 1);
    
    return 0;
}

