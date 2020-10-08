#include <iostream>

using namespace std;

int main()
{
	int numTemps, userTemp;
	int subZeroCounter = 0;

	cin >> numTemps;

	for (int i = 0; i < numTemps; i++)
	{
		cin >> userTemp;
		if (userTemp < 0)
		{
			subZeroCounter++;
		}
	}

	cout << subZeroCounter;
	return 0;
}