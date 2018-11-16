/*
First assignment a user puts inputs an amount of candy bars. 
Program calculates the total weight of bars and displays the number of bars and its weight.
this ones simple
*/

#include <iostream>
using namespace std;

int main()
{
	int candyBars;
	float weight = 3.33;

	cout << "Enter number of candybars: ";
	cin >> candyBars;

	//total weight
	float totalWeight = 3.33 * candyBars;
	cout << "Weight: ";
	cout << totalWeight;
	cout << "oz" << endl;

	//total cost
	int costPerOz = 2;
	float cost = costPerOz * totalWeight;
	cout << "Cost: $";
	cout << cost << endl;

	//number candy bars;
	cout << "# Candy Bars: ";
	cout << candyBars << endl;

	return 0;
}