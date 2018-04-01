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

	cin.get();
	cin.clear();
	cin.ignore();

}

