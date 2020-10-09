#include <iostream>

using namespace std;

int main()
{
	int num;
	int loopCounter = 1;

	cin >> num;

	while (loopCounter < num + 1)
	{
		cout << loopCounter << " Abracadabra" << endl;
		loopCounter++;
	}

	return 0;
}