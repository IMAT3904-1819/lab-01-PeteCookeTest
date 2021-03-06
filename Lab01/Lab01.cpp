// Lab01.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include "time.h"

int main()
{
	srand(time(NULL));

	const int range{ 1000 };

	std::cout << "Guess number between 1 - " << range << std::endl;;

	int number = 1 + rand() % range;



	bool guessed{ false };
	int tries{ 0 };

	int guess{ 0 };

	while (!guessed && tries < 8)
	{
		std::cout << "Type in guess " << tries + 1 << std::endl;

		std::cin >> guess;

		if (guess < number)
		{
			std::cout << "Too small" << std::endl;
			tries++;
		}
		else if (guess > number)
		{
			std::cout << "Too big" << std::endl;
			tries++;
		}
		else
		{
			guessed = true;
			std::cout << "Correct - well done" << std::endl;
		}
	}




	// wait for any key...
	system("pause");
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
