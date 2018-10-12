#include "stdafx.h"
#include <iostream>
#include <stdlib.h>
#include <time.h>

int compInt = 0; // initilaiation for computer random int.
int guessInt = 0; // initilaiation for user guess
int guesses = 8; // Iniitialisation for amount of guesses

int checkGuess(); //Prototype function for guess handling

int main()
{
	srand(time(NULL)); //For truly random rand function
	compInt = rand() % 1000 + 1; // number between 1 and 1000

	
	std::cout << "Random number=" << compInt << std::endl;
	
	while (guesses > 0)
	{
		std::cout << "Guess a number" << std::endl;
		std::cin >> guessInt;
		checkGuess();
	}
	return 0;
}
int checkGuess()
{
	if (guessInt == compInt) // if guess is correct
	{
		std::cout << "You are correct! Winner!" << std::endl;
		guesses = 1; // cheat to stop program
	}

	if (guessInt < compInt) // if guess is less than random number
	{
		std::cout << "The guessed number is too Low,  Try again!" << std::endl;
	}
	if (guessInt > compInt) // if guess is more than random number
	{
		std::cout << "The guessed number is too High,  Try again!" << std::endl;
	}

	
	guesses--; //handling amount of guesses left

	std::cout << "You have guesses " << guesses << " remaining" << std::endl;
	return guesses;
}