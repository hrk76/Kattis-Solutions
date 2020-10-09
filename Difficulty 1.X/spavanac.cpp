#include <iostream>

using namespace std;

int main()
{
	int hours, minutes;

	cin >> hours >> minutes;

	minutes -= 45;

	if (minutes < 0)
	{
		hours -= 1;

		if (hours < 0)
		{
			hours = 23;
		}

		minutes += 60;
	}

	cout << hours << " " << minutes;

	return 0;
}