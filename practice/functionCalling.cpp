#include <iostream>

void doPrint()
{
    std::cout << "Bello, World!" << '\n';
}

int main()
{
    std::cout << "Checkout my function, doPrint()!" << '\n';

    doPrint();
    doPrint();

    std::cout << "That's all for now folks!" << '\n';
}