#include <iostream>
using namespace std;

double number1, number2, result;
char op;

int main()
{
	cout << "Enter first Number" << endl;
	cin >> number1;
	cout << "Enter Second Number" << endl;
	cin >> number2;
	cout << "Enter an Operator" << endl;
	cin >> op;
	if (op == '+') { result = number1 + number2; cout << result << endl; }
	else if (op == '-') { result = number1 - number2; cout << result << endl; }
	else if (op == '*') { result = number1 * number2; cout << result << endl; }
	else if (op == '/') { result = number1 / number2; cout << result << endl; }
	else
		cout << "Wrong Opertor" << endl;
}
