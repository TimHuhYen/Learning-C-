    #include <iostream>

    void displayMessage();
    int displayNumber();
    int sum(int a, int b);

    int main()
    {
        std::cout << "Let's call a function below the main function!" << '\n';
        std::cout << "So, C++ is compiled sequentially, like C, so the program doesn't run"
        << '\n' 
        << "If we forward declare the function."
        << '\n';
        
        displayMessage();
        std::cout << displayNumber() << '\n';

        int x{6}, y{7};

        std::cout << "The sum of " << x << " and " << y << " is: " << sum(x, y) << '\n';

        return 0;
    }

    void displayMessage()
    {
        std::cout << "Bello, World!" << '\n';
    }

    int displayNumber()
    {
        int x{rand() % 11}; // I know rand() is seeded and only gives multiples of 10...
        return x;           // is just example :>
    }

    int sum(int a, int b)
    {
        return a + b;
    }