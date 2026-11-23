#include <iostream>
#include <string>

void foo();

int main()
{
    std::cout << "Hello, World!";

    return 0;
}

void foo()
{
    // doing something that shouldod something
    std::cout << "Pick a number 1 or 2: ";
    int choice{};
    std::cin >> choice;

    std::cout << "What's your name bro: ";
    std::string name{};
    
}