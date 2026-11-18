#include <iostream>

int main()
{
    std::cout << "Input a number: ";
    int x{};
    std::cin >> x;

    std::cout << "Input another number: ";
    int y{};
    std::cin >> y;

    if(x == y)
        std::cout << x << " is equal to " << y << '\n';
    else
        std::cout << "Yeah bro they're not equal" << '\n';

    return 0;

}