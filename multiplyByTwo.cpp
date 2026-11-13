#include <iostream>

int main()
{
    int x{};

    std::cout << "Enter a number!" << '\n';
    std::cin >> x;
    std::cout << "The number multiplied by 2 is: " << x * 2 << '\n';

    return 0;
}