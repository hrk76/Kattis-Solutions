#include <iostream>

using namespace std;

int main()
{
	int numLawns;
	double seedCost, lawnWidth, lawnLength;
	double totalCost = 0.00000000;

	cin >> seedCost;
	cin >> numLawns;

	for (int i = 0; i < numLawns; i++)
	{
		cin >> lawnWidth >> lawnLength;
		totalCost += seedCost * lawnWidth * lawnLength;
	}
	cout.precision(10);
	cout << "\n" << totalCost;
	return 0;
}