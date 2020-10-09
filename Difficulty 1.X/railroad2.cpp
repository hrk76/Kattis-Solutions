#include <iostream>

using namespace std;

int main()
{
	int numJunctions, numSwitches;

	cin >> numJunctions >> numSwitches;

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