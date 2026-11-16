#include <iostream>

#define BIGGY "Biggy"

int main()
{
    std::cout << "Hello, World!" << '\n';

    #ifdef BIGGY
    std::cout << "Hello, my name is " << BIGGY << '\n';     // Since BIGGY is defined, this should run
    #endif

    #ifndef BIGGY
    std::cout << "Hello, my name is not defined" << '\n';   // Since BIGGY isnt defined this should nt run
    #endif

    return 0;
}