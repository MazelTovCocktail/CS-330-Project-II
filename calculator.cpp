#include <iostream>
using namespace std;

int add(int a, int b)
{
	int sum;
	sum = a + b;
	cout << "Sum of " << a << " + " << b << " is : " << sum << endl;
	return sum;
}
int sub(int a, int b)
{
	int difference;
	difference = a - b;
	cout << "Difference of " << a << " - " << b << " is : " << difference << endl;
	return difference;
}
int mult(int a, int b)
{
	int product;
	product = a * b;
	cout << "Product of " << a << " * " << b << " is : " << product << endl;
	return product;
}
int divide(int m, int n)
{
	float division;
	division = (float) m / n;
	cout << "Quotient of " << m << " / " << n << " is : " << division << endl;
	return division;
}

int oddOreven(int x) 
{
	int oddEvenResult = 0;
	if(x % 2 == 0){
		cout << "The number is even.";
	}

	else {
		cout << "The number is odd.";
	}
	return oddEvenResult;
}

int primeCheck(int x, int i) {
	int primeResult = 0;
	bool isPrime = true;

	for (i = 2; i <= x / 2; ++i)
	{
		if (x % i == 0)
		{
			isPrime = false;
			break;
		}
	}
	if (isPrime) {
		cout << "This is a prime number";
	}
	else {
		cout << "This is not a prime number";
	}
	return primeResult;
}

void main()
{
	int x, y;
	cout << "Please enter first no: ";
	cin >> x;
	cout << "Please enter second no: ";
	cin >> y;
	cout << "Please press + for addition" << endl;;
	cout << "Please press - for subtraction" <<endl;
	cout << "Please press * for multiplication" <<endl;
	cout << "Please press / for division" <<endl;
	cout << "Please press 1 to check odd or even for x." << endl;
	cout << "Please press 2 to check odd or even for x." << endl;
	char choice;
	cout << "Please enter your choice of operation: ";
	cin >> choice;
	if (choice == '+')
		add(x, y);
	else if (choice == '-')
		sub(x, y);
	else if (choice == '*')
		mult(x, y);
	else if (choice == '/')
		divide(x, y);
	else if (choice == '1')
		oddOreven(x);
	else if (choice == '2')
		primeCheck(x, y);

	cin.get();
	cin.clear();
	cin.ignore();

}

