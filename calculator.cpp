/*FILE: calculator.cpp
@Project 2
@file-location: /export/home/CSCI 330/
@Date: April 6, 2018
@Date Handed - In: April 13, 2018
@Description: This is a calculator program. This program can be used for addition, substraction, multiplication, division, modulo,*/ 
/*check if a given number is prime, odd, or even.*/

#include <iostream>
#include <limits>
#include <math.h>
using namespace std;

enum Options { NIL, ADD, SUB, MULT, DIV, MOD, PRIME, EVEN, ODD, HELP, QUIT };


/*
@pre None
@post displays the welcome message*/
void welcomeMessage()
{
	cout << "\t┌───────────────────────────────────────┐\n"
		"\t│               Calculator              │\n"
		"\t├───────────────────────────────────────┤\n"
		"\t│ Welcome to the basic calculator       │\n"
		"\t│ program. This allows you to do        │\n"
		"\t│ various operations using two operands │\n"
		"\t│ or determine if an integer is prime,  │\n"
		"\t│ odd, or even.                         │\n"
		"\t│                                       │\n"
		"\t│                     Synth Dolphins,   │\n"
		"\t│                            April 2018 │\n"
		"\t└───────────────────────────────────────┘\n";
}

/*
@pre None
@post displays the main menu*/
void displayMenu() 
{
	cout << "\t\t┌──────────────────────┐\n"
		"\t\t│         Menu         │\n"
		"\t\t├────┬─────────────────┤\n"
		"\t\t│ 1  │ Addition        │\n"
		"\t\t│ 2  │ Subtraction     │\n"
		"\t\t│ 3  │ Multiplication  │\n"
		"\t\t│ 4  │ Division        │\n"
		"\t\t│ 5  │ Modulo          │\n"
		"\t\t│ 6  │ Check if Prime  │\n"
		"\t\t│ 7  │ Check if Even   │\n"
		"\t\t│ 8  │ Check if Odd    │\n"
		"\t\t│ 9  │ Get Help        │\n"
		"\t\t│ 10 │ Quit            │\n"
		"\t\t└────┴─────────────────┘\n";
}

/*
@pre None
@post displays helpful tips to use the calculator*/
void getHelp() 
{
	cout << "   ┌───────────────────────────────────────────────────┐\n"
		"   │                      Help Menu                    │\n"
		"   ├───────────────────────────────────────────────────┤\n"
		"   │ To use this program, simply enter in a number     │\n"
		"   │ corresponding to the command you wish to enter.   │\n"
		"   │                                                   │\n"
		"   │ Commands 1 through 5 all correspond to            │\n"
		"   │ arithmetic operations, and require the user to    │\n"
		"   │ enter two valid numbers. Entering anything but a  │\n"
		"   │ number will result in another prompt asking you   │\n"
		"   │ to enter a correct value.                         │\n"
		"   │                                                   │\n"
		"   │ Commands 6 through 7 are all used to determine if │\n"
		"   │ an input integer fulfills a certain condition. In │\n"
		"   │ this case, it determines if it is prime, even, or │\n"
		"   │ or odd.                                           │\n"
		"   │                                                   │\n"
		"   │ When you are done using the calculator, you can   │\n"
		"   │ use the last option, 10, to quit the program.     │\n"
		"   └───────────────────────────────────────────────────┘\n";
}

/*
@pre None
@post displays the Good-bye message*/
void quitMessage() 
{
	cout << "\t\t┌──────────────────────┐\n"
		"\t\t│      Good-bye!       │\n"
		"\t\t└──────────────────────┘\n";
}

/*
@pre None
@post returns the input for further processing*/
float getInput() 
{
	int tries = 0;
	bool inputFailed;
	float input;
	do
	{
		if (tries++ > 0)
			cout << "Input entered was invalid! Please enter another." << endl;
		cin >> input;
		inputFailed = cin.fail();
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
	} while (inputFailed);
	return input;
}

/*@param a the first operand
@param b the second operand
@pre parameters must be integers or float types
@post returns the result of a and b as a float type*/
float add(double a, double b)
{
	float sum;
	sum = a + b;
	return sum;
}

/*@param a the first operand
@param b the second operand
@pre parameters must be integers or float types
@post returns the difference of a and b as a float type */
float sub(double a, double b) 
{
	double difference;
	difference = a - b;
	return difference;
}

/*@param a the first operand
@param b the second operand
@pre parameters must be integers or float types
@post returns the result of a and b as a float type*/
float mult(double a, double b) 
{
	double product;
	product = a * b;
	return product;
}

/*@param a the first operanr
@param b the second operand
@pre parameters must be integers or float types
@post returns the result of a and b as a float type
    May return NAN if second operand is 0*/
float divide(double m, double n) 
{
	float division;
	if (n == 0) {
		return NAN;
	}
	else {
		division = (float)m / n;
		return division;
	}
}

/*@param a the first operanr
@param b the second operand
@pre parameters must be integers or float types
@post returns the result of a and b as a float type
        May return NAN if second operand is 0*/
float mod(double a, double b) 
{
	if (b == 0) {
		return NAN;
	}
	else {
		return fmod(a, b);
	}
}

/*@param x the operand to check for odd
@pre parameter must be an integer.
post: return value must is a boolean value true if param is odd, else true.*/
bool isOdd(int x) 
{
	if (x % 2 == 0) {
		return false;
	}

	else {
		return true;
	}
}

/*@param x the operand to check for prime
@pre parameter must be an integer
@post returns bool value whether the operand is prime. True if prime, false if not*/
bool isPrime(int x)
{
	bool prime = true;

	for (int i = 2; i <= x / 2; ++i)
	{
		if (x % i == 0)
		{
			prime = false;
			break;
		}
	}

	if (x < 2) {
		prime = false;
	}
	return prime;
}

/*
@post Processes the calculator and makes required funtional calls */
int main()
{
	welcomeMessage();
	int option;

	do
	{
		displayMenu();
		cout << "Please enter an option: ";
		cin >> option;
		while (option <= NIL || option > QUIT)
		{
			cout << "Invalid! Please enter another option: ";
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			cin >> option;
		}
		if (option <= MOD)
		{
			cout << "Please enter the first operand." << endl;
			double num1 = getInput();
			cout << "Please enter the second operand." << endl;
			double num2 = getInput();
			double result;
			if (option == ADD) 
			{
				result = add(num1, num2);
				cout << num1 << " + " << num2 << " = " << result << endl;
			}
			else if (option == SUB)
			{
				result = sub(num1, num2);
				cout << num1 << " - " << num2 << " = " << result << endl;
			}
			else if (option == MULT) 
			{
				result = mult(num1, num2);
				cout << num1 << " * " << num2 << " = " << result << endl;
			}
			else if (option == DIV)
			{
				result = divide(num1, num2);
				cout << num1 << " / " << num2 << " = " << result << endl;
			}
			else if (option == MOD)
			{
				result = mod(num1, num2);
				cout << num1 << " % " << num2 << " = " << result << endl;
			}
		}
		else if (option <= ODD)
		{
			cout << "Plase enter an integer." << endl;
			float inputFloat = getInput();
			int num1 = (int)inputFloat;
			while (num1 != inputFloat)
			{
				cout << "Please only enter an integer!" << endl;
				inputFloat = getInput();
				num1 = (int)inputFloat;
			}
			bool result;
			if (option == PRIME)
			{
				result = isPrime(num1);
				if (result)
					cout << num1 << " is prime!" << endl;
				else
					cout << num1 << " is not prime!" << endl;
			}
			else if (option == EVEN)
			{
				result = !isOdd(num1);
				if (result)
					cout << num1 << " is even!" << endl;
				else
					cout << num1 << " is not even!" << endl;
			}
			else if (option == ODD)
			{
				result = isOdd(num1);
				if (result)
					cout << num1 << " is odd!" << endl;
				else
					cout << num1 << " is not odd!" << endl;
			}
		}
		else if (option == HELP)
		{
			getHelp();
		}
		else if (option == QUIT)
		{
			quitMessage();
		}
		else
		{
			cout << "ERROR! INVALID OPTION!" << endl;
		}
	} while (option != QUIT);

	return 0;

	cin.get();
	cin.ignore();
	cin.clear();
}

