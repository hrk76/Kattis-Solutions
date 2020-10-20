#include <iostream>

using namespace std;

int main()
{
	int testCases, inNum;

	cin >> testCases;

	for (int i = 0; i < testCases; i++)
	{
		cin >> inNum;

		switch (inNum)
		{
		case 1: 
			cout << 1 << endl;
			break;
		case 2:
			cout << 2 << endl;
			break;
		case 3:
			cout << 6 << endl;
			break;
		case 4:
			cout << 4 << endl;
			break;
		default:
			cout << 0 << endl;
			break;
		}
	}

	return 0;
}