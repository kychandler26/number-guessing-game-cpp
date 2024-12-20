# Guess a number between 1 and 100 game.
This is a simple project I undertook to get familiar with the C++ language. The program generates a random number between 1 and 100 then prompts the user to guess what the number is.
If the user guesses the wrong number a counter increments in the background. If the user enters a non-integer input then the program will prompt them to enter an integer. When the user
finally guesses the correct number they are given a success message and told how many tries it took them.

## How It's Made:

**Tech used:** C++ Standard libraries

The entire program is stored in a single file. The iostream and ctime standard modules are used in addition to the std namespace.
The program itself is structured with four functions, including the main function. This layout is to ensure each function is modular and
allows for easy editing and understanding of the logic for others who read the file.

The four functions perform the following activities.

numberGenerator() as the name suggests generates the target number that the user is required to guess. This was achieved using the rand() function
in addition to the srand() function.

makeGuess() contains the logic that validates the user input. When this is completed the makeGuess() function also calls
the testGuess() function.

testGuess() compares the user's input to the target number using simple if - else if - else statements. Incorrect answers increment a global attempt counter.

Finally the main() function seeds the srand() function using the current time, calculates and stores the target number using the numberGenerator() function, prompts the user
to make a guess and calls the make guess function.

## Lessons Learned:

This project humbled me more than I would like to admit.
The first learning was simply how catastrophically your program can fail when you do not validate user input on a statically typed language. Most of my previous experience was in
Python and needless to say when I first tried entering 'abc' into the command line and seeing the infinite loop that triggers I did panic with a lot of confusion.

The second thing that I learned was the intricacies with generating a random number at a lower level. Computers intrinsically are not very random. Compared to a language like
javascript where Math.random() can be called and not having to think twice about generating a random number, C++ and its srand() and rand() functions made me appreciate the amount of
abstraction from these slightly lower level issues that we have as modern developers.




