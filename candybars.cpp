/*
First assignment a user puts inputs an amount of candy bars. 
Program calculates the total weight of bars and displays the number of bars and its weight.
this ones simple
Second assignment is pass two values to a function that calculates the sum of the two values.
use two functions that passes both
one is call by value
other is call by reference
after calculating the sum of the two values add that value to the first parameter
and return the first parameter
*/

#include <iostream>
using namespace std;

double calcWeight(int candybars) {
	double weight = 3.33;
	return weight * 5;
}

int main()
{
	int candyBars = 5;
	std::cout << "Weight: ";
	std::cout << calcWeight(candyBars);
	std::cout << "oz" << std::endl;
	std::cout << "# Candy Bars: ";
	std::cout << candyBars << std::endl;

	return 0;
}