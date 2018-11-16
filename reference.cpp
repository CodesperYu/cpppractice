/*
Second Assignment
create two functions that both return sum of two values
one of the function is call by value
other is call by reference
after calculating the sum of the two values, add it with its first parameter
*/

#include <iostream>
using namespace std;

void sumVal(int x, int y) 
{
	int sum = x + y;
	x = x + sum;
};

void sumRef(int &x, int &y) 
{
	int sum = x + y;
	x = x + sum;
};

int main()
{
	int x = 2;
	int y = 3;

	sumVal(x,y);

	cout << "call by results:";
	cout << x << endl;

	sumRef(x,y);

	cout << "call by reference:";
	cout << x << endl;

	return 0;
}