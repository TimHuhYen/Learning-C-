#include "add.h"

#include <iostream>

int main()
{

    std::cout << "Input two integers separated by spaces: ";
    
    int x, y;
    std::cin >> x >> y;

    std::cout << x << " + " << y << " = " << add(x, y);
    
    return 0;
}