#include <iostream>

int getNum()
{
    std::cout << "Enter a number: " << '\n';
    int num{};
    std::cin >> num;
    return num;
}