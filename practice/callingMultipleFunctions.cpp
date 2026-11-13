#include <iostream>

void funcA()
{
    std::cout << "Bello, this is function A!" << '\n';
}

void funcB()
{
    std::cout << "Bello, this is function B!" << '\n';
    funcA();
}

void funcC()
{
    std::cout << "Bello, this is function C!" << '\n';
    funcB();
}

void funcD()
{
    std::cout << "Bello, this is function D!" << '\n';
    funcC();
}

int main()
{
    std::cout << "Checkout my function. funcD() calls funcC(), which calls funcB(), which calls funcA()!" << '\n';
    funcD();

    return 0;
}