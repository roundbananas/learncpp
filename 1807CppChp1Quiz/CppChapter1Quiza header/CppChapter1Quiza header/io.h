//
//  io.h
//  CppChapter1Quiza header
//
//  Created by Carl Turner on 24/7/18.
//  Copyright © 2018 Carl Turner. All rights reserved.
//

#ifndef IO_H
#define IO_H
int readNumber ()
{
    int x;
    std::cout << "Please enter a number: ";
    std::cin >> x;
    return x;
}

void writeAnswer(int x, int y)
{
    std::cout << "The sum of your numbers is: " << x + y << std::endl;
}


#endif /* io_h */
