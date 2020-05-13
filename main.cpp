#include <iostream>
#include <cmath>
#include "complexType.h"

using namespace std;

int main()
{
	complexType n1(5, 1);
	complexType n2, n3;
	cout << "Welcome to the complexType Program!" << endl << endl;
	cout << "n1 = " << n1 << endl;
	cout << "n2 = " << n2 << endl;
	cout << endl;
	cout << "Input a complex number in the form (a, b)." << endl << endl;
	cin >> n2;
	cout << endl;
	cout << "n2 = " << n2 << endl;
	n3 = n1 + n2;
	cout << n1 << " + " << n2 << " = n3 = " << n3 << endl;
	cout << n1 << " - " << n2 << " = " << n1 - n2 << endl;
	cout << n1 << " * " << n2 << " = " << n1 * n2 << endl;
	cout << n1 << " / " << n2 << " = " << n1 / n2 << endl;
	return 0;
}