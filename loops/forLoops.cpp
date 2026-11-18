#include <iostream>

void outputNum(int);

int main()
{
    std::cout << "Input a number: ";

    int num{};
    std::cin >> num;

    outputNum(num);

    return 0;
}

#ifdef false
void outputNum(int num)
{
    for (num; num > 0; num--)
    {
        std::cout << num<< '\n';
    }
}
#endif

void outputNum(int x)
{
    while(x > 0)
    {
        std::cout << "Hello, World!\n";
        x--;
    }
}