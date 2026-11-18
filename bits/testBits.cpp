#include <iostream>

void foo();

int main()
{
    foo();

    return 0;
}

void foo()
{
    std::cout << "Input a number: ";

    int x{};
    std::cin >> x;

    std::cout << x << " in hexadecimal is: " << std::hex << "0x" << x << '\n';
}