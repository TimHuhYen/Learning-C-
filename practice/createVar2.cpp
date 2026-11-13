#include <iostream>

int main()
{

    std::cout << "Yo bro, this is more testing" << std::endl;
    std::cout << "Enter two numbers separated by a space: \n";

    int x{}, y{};
    std::cin >> x >> y;

    std::cout << "The sum of " << x << " and " << y << " is: \n";
    std::cout << (x + y) << '\n';

    return 0;

}