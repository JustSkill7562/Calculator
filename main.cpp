#include <iostream>
#include <string>
#include <math.h>
#include <random>
using namespace std;

void Run();
void CheckOp();

int number1;
int number2;
int result;
char op;

bool running = false;

void Run()
{
    cout << "Hello to this Calculator!" << endl;
    cout << "Please type the first number" << endl;
    cin >> number1;
    cout << "Please type the second number" << endl;
    cin >> number2;
    cout << "Please type your Operator" << endl;
    cin >> op;
    CheckOp();
    cout << "The Result of " << number1 << " + " << number2 << " = " << result << endl;
}

void CheckOp()
{
    if(op =='+') {result = number1 + number2;}
    if(op =='-') {result = number1 - number2;}
    if(op =='*') {result = number1 * number2;}
    if(op =='/') {result = number1 / number2;}
    if(op!= '+' && op != '-' && op != '*' && op != '/') {cout << "Wrong Operator!!!!!!" << endl;running = false;}
}

int main()
{
    running = true;
    while (running)
    {
        Run();
    }
    cout << "Something went Wrong please close the Program an restart it ; )" << endl;
    while(1){}
    return 0;
}