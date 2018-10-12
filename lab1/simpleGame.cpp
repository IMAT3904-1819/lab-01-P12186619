#include "stdafx.h"
#include <iostream>
#include <stdlib.h>
#include <time.h>

int compInt = 0;
int guessInt = 0;
int guesses = 5;

int checkGuess();

int main()
{
	srand(time(NULL));
	compInt = rand() % 100 + 1;

	
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
	if (guessInt == compInt)
	{
		std::cout << "You are correct! Winner!" << std::endl;
		guesses = 1;
	}

	if (guessInt < compInt)
	{
		std::cout << "The guessed number is too Low,  Try again!" << std::endl;
	}
	if (guessInt > compInt)
	{
		std::cout << "The guessed number is too High,  Try again!" << std::endl;
	}

	
	guesses--;

	std::cout << "You have guesses " << guesses << " remaining" << std::endl;
	return guesses;
}