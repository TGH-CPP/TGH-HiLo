// ConsoleApplication1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <time.h>
using namespace std;

int i, failCount, number;

void enterInt(){
	cout << "Please try to guess an int: ";
	cin >> i;
	if (number != i)
	{
		failCount++;
		if ( i < number)
			cout << "You guessed wrong, the number is bigger than " << i << "\n";
		else
			cout << "You guessed wrong, the number is less than " << i << "\n";
		enterInt();
	}
	else
		cout << "You guessed the number, it was: " << number << "\nIt took you " << failCount + 1 << " times.\n";
}

int _tmain(int argc, _TCHAR* argv[])
{
	srand(time(nullptr));
	number = rand() % 100 + 1;
	enterInt();
	cin.clear();
	cin.ignore(255, '\n');
	cin.get();
	return 0;
}

