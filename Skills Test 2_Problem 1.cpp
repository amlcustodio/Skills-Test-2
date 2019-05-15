#include <iostream>
#include <conio.h>

using namespace std;

int main ()
{
	float a, b, c;
	
	cout << "Enter first number: ";
	cin >> a;
	cout << "Enter second number: ";
	cin >> b;
	cout << "Enter third number :";
	cin >> c;

	if (a > b && a > c)
	{
		cout << "Largest number is: " << a;
	}
	
	if (b > a && b > c)
	{
		cout << "Largest number is: " << b;
	}

	if (c > a && c > b)
	{
		cout << "Largest number is: " << c;
	}

	else if (a == b && a == c && b == c)
	{
		cout << "Invalid";
	}

	_getch();
	return 0;

}

