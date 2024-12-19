#include <iostream>
using namespace std;

void makeGuess() {
    cout << "This is where the guessing logic will go!";
    // cout << "Pick a number between 1 and 100"; // Prompt the user
    // cin >> user_guess; // Get user's guess from the keyboard
    // testGuess(user_guess, target_numm);
}

void testGuess() {
    cout << "This is where the testing logic will go!";
    // Check whether the prompt is correct
    // if (user_guess = target_num) {
    //     cout << "You got the number good job!";
    // } else if (user_guess > target_num) {
    //     cout << "Higher!";
    //     makeGuess();
    // } else {
    //     cout << "Lower!";
    //     makeGuess();
    // };
}

int main() 
{
    // Initialise the variables
    int target_num = rand() % 100; // Initialise the target integer variable
    int user_guess; // Initialise the user_guess variable
    makeGuess();
    testGuess();

}



