//
//  main.cpp
//  Double Number
//
//  Created by Carl Turner on 17/7/18.
//  Copyright © 2018 Carl Turner. All rights reserved.
//

#include <iostream>

int add(int x, int y);

int doubleNumber(int x){
    return 2 * x;
}

int main() {
    int a;
    std::cout << "Enter a number and I will double it ";
    std::cin >> a;
    std::cout << "Your double is: " << doubleNumber(a) << std::endl;
    
    std::cout << "Adding 5 and 6 " << add(5, 6) <<std::endl;
    return 0;
}
