#include <iostream>

using namespace std;

int main()
{
	int numJunctions, numSwitches;

	cin >> numJunctions >> numSwitches;

	// numSwitches must be even to complete a loop. numJunctions is irrelevant
	if (numSwitches % 2 == 0)
	{
		cout << "possible";
	}

	else
	{
		cout << "impossible";
	}

	return 0;
}
