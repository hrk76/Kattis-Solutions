#include <iostream>

using namespace std;

int main()
{
	int testCases, number;
	cin >> testCases;

	for (int i = 0; i < testCases; i++)
	{
		cin >> number;

		if (number % 2 == 0)
		{
			cout << endl << number << " is even" << endl;
		}

		else
		{
			cout << endl << number << " is odd" << endl;
		}
	}

	return 0;
}