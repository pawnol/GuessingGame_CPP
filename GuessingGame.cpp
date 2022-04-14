/*
Guessing Game
Pawelski
4/13/2022
Please follow the instructions on the activity sheet.
*/

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

int main()
{
    srand(time(0));
    while (true)
    {
        int number_of_guesses = 0;
        int secret_number = rand() % 100 + 1;
        std::cout << "I'm thinking of a number between 1 and 100...\n";
        while (true)
        {
            number_of_guesses++;
            int guess;
            std::cout << "Guess my number >> ";
            std::cin >> guess;
            if (guess < secret_number)
            {
                std::cout << "Wrong, too low!\n";
            }
            else if (guess > secret_number)
            {
                std::cout << "Wrong, too high!\n";
            }
            else
            {
                std::cout << "You guessed my number!\n";
                std::cout << "You took " << number_of_guesses << " to get the number.\n";
                break;
            }
        }
        std::string again;
        std::cout << "Play again? (Yes/No) >> ";
        std::cin >> again;
        if (again == "no" || again == "No")
        {
            break;
        }
        std::cout << std::endl;
    }
    return 0;
}
