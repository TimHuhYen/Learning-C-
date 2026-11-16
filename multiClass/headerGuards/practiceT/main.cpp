#include <iostream>
#include <cstdlib>

// TODO:
// READ A NUMBER
int readNumber();

// WRITE A NUMBER
void writeNumber();

int main()
{
    writeNumber();
    
    return 0;
}

int readNumber()
{
    std::cout << "Input a number: ";

    int x;
    std::cin >> x;

    return x;
}

void writeNumber()
{
    std::cout << "The number is: " << readNumber();
}