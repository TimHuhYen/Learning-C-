#ifndef IO_H
#define IO_H

#include <iostream>

int readNumber()
{
    std::cout << "Input a number: ";
    int x{};
    std::cin >> x;
    return x;
}

void writeAnswer(int x)
{
    std::cout << "The sum is: " << x << '\n';
}

#endif