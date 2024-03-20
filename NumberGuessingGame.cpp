#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() 
{
    // Seed the random number generator
    srand(time(0));
    
    // Generate a random number between 1 and 100
    int randomNumber = rand() % 100 + 1;
    
    // Variables to store user input and the guess
    int guess, attempts = 0;
    
    // Game loop
    do 
	{
        // Ask the user to guess the number
        cout << "Guess the number (between 1 and 100): ";
        cin >> guess;
        
        // Increment the attempts counter
        attempts++;
        
        // Check if the guess is correct, too low, or too high
        if (guess == randomNumber) 
		{
            cout << "Congratulations! You guessed the number " << randomNumber << " correctly in " << attempts << " attempts." << endl;
        } 
		
		else if (guess < randomNumber) 
		{
            cout << "Too low! Try again." << endl;
        } 
		
		else 
		{
            cout << "Too high! Try again." << endl;
        }
        
    } 
	while (guess != randomNumber);
    
    return 0;
}
