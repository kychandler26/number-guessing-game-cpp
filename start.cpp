#include <iostream>
#include <ctime>
using namespace std;

// Forward declaration so testGuess function can use makeGuess before its defined
void makeGuess(int target_num);
int numberGenerator();

void testGuess(int user_guess, int target_num) {
    // Check whether the guess is correct
    if (user_guess == target_num) {
        cout << "You got the number good job!" <<endl;
    } else if (user_guess > target_num) {
        cout << "Lower! " << endl;
        makeGuess(target_num);
    } else {
        cout << "Higher! " << endl;
        makeGuess(target_num);
    };
}

void makeGuess(int target_num) {
    int user_guess;
    cin >> user_guess; // Get user's guess from the keyboard

    testGuess(user_guess, target_num);
}

int numberGenerator() {
    
    int target_num = (1+ (rand() % 100)); // Calculate the random number
    return target_num;

}

int main() 
{
    srand(time(0)); // Seed the random number function with current time
    int target_num = numberGenerator();
    cout << "Pick a number between 1 and 100: "; // Prompt the user
    makeGuess(target_num); // Call the make guess function
}



