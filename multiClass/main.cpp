#include "square.h"
#include "wave.h"

#include <iostream>
#include <cstdlib>

int main()
{
    std::cout << "Enter a number to be squared: ";
    
    int x;
    std::cin >> x;

    std::cout << "The square of " << x << " is: " << square(x) << '\n';
    
    return 0;
}