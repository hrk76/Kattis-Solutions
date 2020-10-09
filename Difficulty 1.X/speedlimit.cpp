#include <iostream>

using namespace std;

int main()
{
	int numPairs, numMPH, totalHours, numHours, numMiles;

	while (1)
	{
		cin >> numPairs;
		if (numPairs == -1)
		{
			break;
		}

		numMiles = 0;
		numHours = 0;

		for (int i = 0; i < numPairs; i++)
		{
			cin >> numMPH >> totalHours;
			numHours = totalHours - numHours;
			numMiles += numHours * numMPH;
			numHours = totalHours;
		}

		cout << numMiles << " miles" << endl;
	}

	return 0;
}