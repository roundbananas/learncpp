//
//  main.cpp
//  1808 VariableScope
//
//  Created by Carl Turner on 9/8/18.
//  Copyright © 2018 Carl Turner. All rights reserved.
//

/*
 Write a program that asks the user to enter two integers, the second larger than the first. If the user entered a smaller integer for the second integer, use a block and a temporary variable to swap the smaller and larger values. Then print the value of the smaller and larger variables. Add comments to your code indicating where each variable dies.
 
 The program output should match the following:
 
 Enter an integer: 4
 Enter a larger integer: 2
 Swapping the values
 The smaller value is 2
 The larger value is 4
 */

#include <iostream>

int main(){
    std::cout << "Enter an integer: ";
    int x;
    std::cin >> x;
    
    std::cout << "Enter a larger integer: ";
    int y;
    std::cin >> y;
    
    if (y > x){
        std::cout << "The smaller value is " << x << std::endl;
        std::cout << "The larger value is " << y << std::endl;
    }
    else if (x > y){
        std::cout << "Swapping the values " << std::endl;
        
        int smaller = y;
        y = x;
        x = smaller;
        
        std::cout << "The smaller value is " << x << std::endl;
        std::cout << "The larger value is " << y << std::endl;
    } // smaller dies here
} //x and y die here
