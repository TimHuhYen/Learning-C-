#include <iostream>

void converter();

int main()
{
    converter();

    return 0;
}

void converter()
{
    std::cout << "Input a char: ";

    char x{};
    std::cin >> x;

    // ASCII for 'a' is 97
    std::cout << "You entered '" << x << "', which has ASCII code " << static_cast<int>(x) << "!\n"; 

} // Super sigma program btw