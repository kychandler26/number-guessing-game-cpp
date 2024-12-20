#include <iostream>
#include <ctime>
using namespace std;

// Forward declaration so testGuess function can use makeGuess before its defined
void makeGuess(int target_num);
int numberGenerator();

// Declare global variable for number of attempts
int attempts = 1;

void testGuess(int user_guess, int target_num) {
    // Check whether the guess is correct
    if (user_guess == target_num) {
        cout << "You got the number good job!" <<endl;
        cout << "It took you " << attempts << " tries!" << endl;
    } else if (user_guess > target_num) {
        cout << "Lower! " << endl;
        attempts++;
        makeGuess(target_num);
    } else {
        cout << "Higher! " << endl;
        attempts++;
        makeGuess(target_num);
    };
}

void makeGuess(int target_num) {
    int user_guess;
    while (!(cin >> user_guess)) { // If the input from the user is not an integer
    cout << "Invalid input. Please enter an integer." <<endl;
    cout << "Pick a number between 1 and 100: ";
    cin.clear(); // Clear error flags in the input stream that were set due to the invalid input. This is necessary to allow further input from the user
    cin.ignore(numeric_limits<streamsize>::max(), '\n'); // remove any remaining invalid characters from the input buffer. It essentially discards everything up to the next newline character (\n), which is usually generated when the user presses Enter.
}

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



