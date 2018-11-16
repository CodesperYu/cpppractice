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
	int costPerOz = 2;
	float weight = 3.33;
	float totalWeight;
	float cost;

	cout << "Enter number of candybars: ";
	cin >> candyBars;

	//total weight
	totalWeight = weight * candyBars;
	cout << "Weight: ";
	cout << totalWeight;
	cout << "oz" << endl;

	//total cost
	cost = costPerOz * totalWeight;
	cout << "Cost: $";
	cout << cost << endl;

	//number candy bars;
	cout << "# Candy Bars: ";
	cout << candyBars << endl;

	return 0;
}