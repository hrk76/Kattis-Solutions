#include <iostream>

using namespace std;

int main()
{
	int numbersWritten, price;
	int total = 0;

	cin >> numbersWritten;

	for (int i = 0; i < numbersWritten; i++)
	{
		cin >> price;
		
		if (price < 0)
		{
			total -= price;
		}
		
	}

	cout << total;

	return 0;
}