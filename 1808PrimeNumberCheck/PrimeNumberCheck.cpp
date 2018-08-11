/*
1.ask user to enter a single digit integer
2.if they enter prime number (divisible evenly by 1 and itself)
     3.print "the digit is prime"
     4. else print "the digit is not prime"

use bool variable to keep track of whether the digit is prine or not
*/

#include <iostream>

//function to get input
int16_t getInput(){
    int16_t _x;
    std::cout << "Enter an integer between 1 and 9: " << std::endl;
    std::cin >> _x; 
    return _x;
}

//function to check if digit is prime
bool checkPrime(int _x){
    bool _isPrime = false;
    if (_x == 2 || _x == 3 || _x == 5 || _x == 7)
    _isPrime = true;
    return _isPrime;
}

//function to print feedback to user
void printFeedback(bool _y){
    if (_y)
    std::cout << "The digit is prime" << std::endl;
    else 
    std::cout << "The digit is NOT prime" << std::endl;
    
}

int main(){
    int16_t x;
        x = getInput();
    bool isPrime;
    isPrime = checkPrime(x); 
    printFeedback(isPrime);
   return 0;
}
