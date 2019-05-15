#include <iostream>
#include <conio.h>

using namespace std;

int main ()
{
	int a;
	cout << "Enter a number: ";
	cin >> a;
	cout << "Multiplication Table of " << a << ":" << endl;

	for (int b = 1; b <=10; ++b)
	{
		cout << b << " * " << a << " = " << b * a << endl;
	}

	_getch();
	return 0;
}