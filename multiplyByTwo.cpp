#include <iostream>

int main()
{
    int num{};

    std::cout << "Enter a number!" << '\n';
    std::cin >> num;

    num = num * 2;
    std::cout << "The number multiplied by 2 is: " << num << '\n';

    return 0;
}