#include <iostream>

int main()
{
    int x{}, y{};

    std::cout << "Enter two numbers separated by a space!" << '\n';
    std::cin >> x >> y;

    std::cout << x << " + " << y << " = " << x + y << '\n';
    std::cout << x << " - " << y << " = " << x - y << '\n';

    return 0;
}