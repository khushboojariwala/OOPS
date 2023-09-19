#include <iostream>
using namespace std;

void addition(int a, int b)
{
cout << "sum = " << (a + b);
}

void subtraction(int a, int b)
{
	cout << endl << "sub = " << (a - b );
}
void maltiplication(int a, int b)
{
	cout << endl << "mul = " << (a * b );
}
void division(int a, int b)
{
	cout << endl << "div = " << (a / b );
}
int main()
{
	addition(10, 22);
	subtraction(65, 56);
    maltiplication(55,66);
    division(58,22);
	return 0;
}

