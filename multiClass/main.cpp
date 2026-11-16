#include "add.h"
#include <iostream>
#include "joe.h"

int add(int, int); // forward dec

int main()
{
    #ifdef RUN
    std::cout << "The sum of 6 and 7 is " << add(6, 7) << '\n';
    #endif

    #ifdef JOE
    std::cout << "Hello, my name is " << JOE << '\n';
    #endif
    
    return 0;
}