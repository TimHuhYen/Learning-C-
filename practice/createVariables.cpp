#include <iostream>

int main()
{
    /*
     * can create variables different ways
    */
    int myVal;
    myVal = 5;
    
    int myVal2 {100};
    //int myVal3 {99.99}; // will throw error

    std::cout << "myVal" << " = " << myVal << std::endl;
    std::cout << "myVal2 = " << myVal2 << std::endl;
    std::cout << "Hello, World!" << std::endl;

    std::cout << "Insert value for myVal2: ";
    std::cin >> myVal2;

    std::cout << "Changed myVal2 = " << myVal2 << std::endl;

    return 0;

}