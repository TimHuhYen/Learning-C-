#include <iostream>

int main()
{
    bool b1 { true };
    bool b2 { false };
    bool b3 { !true };
    bool b4 { !false };

    
    std::cout << "bools: " << '\n';
    std::cout << b1 << '\n';
    std::cout << b2 << "\n\n";

    std::cout << "!bools: " << '\n';
    std::cout << b3 << '\n';
    std::cout << b4 << "\n\n";

    std::cout << std::boolalpha;

    std::cout << "bools: " << '\n';
    std::cout << b1 << '\n';
    std::cout << b2 << "\n\n";
    
    
    std::cout << "!bools: " << '\n';
    std::cout << b3 << '\n';
    std::cout << b4 << "\n\n";

    return 0;
}