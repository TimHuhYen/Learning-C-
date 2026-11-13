#include <iostream>

void sum(int a, int b)
{
    int sumOfTwoNumbers {a + b};
    std::cout << "The sum of " << a << " and " << b << " is: " << sumOfTwoNumbers << "! " << '\n';
}

int main()
{
    std::cout << "Hello there traveller, input two numbers separated by a space and I will sum them for you!" << '\n';

    int x{}, y{};
    std::cin >> x >> y;

    sum(x, y);

    return 0;
}
