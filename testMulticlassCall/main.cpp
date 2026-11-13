#include <iostream>

// making sure to put input.cpp function as header
int getNum();

int main()
{

    int x{getNum()};
    std::cout << "The number is: " << x << '\n';

}