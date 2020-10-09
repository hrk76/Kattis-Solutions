#include <iostream>

using namespace std;

int main()
{
	int megabytes, months, dataUsed;
	int rolloverData = 0;

	cin >> megabytes >> months;

	for (int i = 0; i < months; i++)
	{
		cin >> dataUsed;
		rolloverData += megabytes - dataUsed;
	}

	cout << rolloverData + megabytes;

	return 0;
}