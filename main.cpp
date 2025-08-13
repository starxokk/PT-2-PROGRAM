#include <iostream>
#include <conio.h>
#include "helper.h"

using namespace std;

#define EL '\n';

void getNumbers();

int firstNum;
int secondNum;


int main()
{
	bool running = true;
	char input;
	
	cout << "=-=-=-=-=-=-=" << EL;
	cout << "Calculator Application" << EL;
	while(running)
	{
		cout << "Type 'm' to multiply" << EL;
		cout << "Type 'd' to divide" << EL;
		cout << "Type 'a' to add" << EL;
		cout << "Type 's' to subtract" << EL;
		cout << "Type anything else to abort out of program" << EL;
		cin >> input;
		
	
		int final_number;
		input = tolower(input);
		switch(input)
		{
			case 'm':
				getNumbers();
				final_number = firstNum * secondNum;
				cout << "Your product is: " << final_number << EL;
				break;
			case 'd':
				getNumbers();
				final_number = firstNum / (double)secondNum;
				cout << "Your quotient is: " << final_number << EL;
				break;
			case 'a':
				getNumbers();
				final_number = addition(firstNum, secondNum);
				cout << "Your sum is: " << final_number << EL;
				break;
			case 's':
				getNumbers();
				final_number = firstNum - secondNum;
				cout << "Your difference is: " << final_number << EL;
				break;
			default:
				running = false;
				break;
		}
	}
	return 0;
}

void getNumbers()
{
	cout << "Input your first number: ";
	cin >> firstNum;
	cout << "Input your second number: ";
	cin >> secondNum;
}
