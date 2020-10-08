#include <iostream>

using namespace std;

int main()
{
	int numBats, typeBat;
	double battingAvg;
	double sumBats = 0;
	double walkCtr = 0;

	cin >> numBats;

	for (int i = 0; i < numBats; i++)
	{
		cin >> typeBat;

		if (typeBat == -1)
		{
			walkCtr++;
		}

		else
		{
			sumBats += typeBat;
		}
	}

	battingAvg = sumBats / (numBats - walkCtr);
	cout << fixed << battingAvg;
}