#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    // Initialize random seed
    srand(time(0));
    int random_no = rand() % 100 + 1; // Generate a random number between 1 and 100
    int user_input;
    
    cout << "Guess the number between 1 and 100: " << endl;
    
    while (true)
    {
        cin >> user_input;
        if (user_input > random_no)
        {
            cout << "Too high, try again: " << endl;
        }
        else if (user_input < random_no)
        {
            cout << "Too low, try again: " << endl;
        }
        else
        {
            cout << "Congratulations! You guessed the number." << endl;
            break;
        }
    }
    
    return 0;
}

