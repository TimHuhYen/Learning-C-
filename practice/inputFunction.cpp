#include <iostream>

void inputFunction()
{
 
    std::cout << "Input a number: ";
    
    int num{};
    std::cin >> num;

    std::cout << "Is your number... " << '\n';
    std::cout << num << "! " << '\n';

}

int main()
{

    std::cout << "This program will ask for a number!" << '\n';

    inputFunction();

}