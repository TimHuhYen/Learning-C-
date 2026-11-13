#include <iostream>
#include <cstdlib>

int generateNum()
{
    int num {rand() % 11};
    return num;
}

int main()
{
    std::cout << "Welcome to the number guessing game!" << '\n';
    std::cout << "Where you have to guess a random number [0, 10]!" << '\n';

    int guess{-1};
    int randomNum {generateNum()};

    while (guess != randomNum)
    {
        std::cout << "Guess a number! ";
        std::cin >> guess;
        
        if (guess < randomNum)
        {
            std::cout << "Your guess is too low!" << '\n';
        }
        else if (guess > randomNum)
        {
            std::cout << "Your guess is too high!" << '\n';
        }
        else
        {
            std::cout << "You guessed the number! \n It was: " << randomNum << '\n';
        }
        
    }
    
    return 0;
}