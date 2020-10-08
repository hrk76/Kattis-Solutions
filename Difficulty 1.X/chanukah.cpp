#include <iostream>

using namespace std;

int main()
{
	int sets, setNum, days, candles;

	cin >> sets;

	for (int i = 0; i < sets; i++)
	{
		cin >> setNum >> days;

		// sum = n(n + 1) / 2 + n
		candles = days * (days + 3) / 2;

		cout << setNum << " " << candles << endl;
	}

	return 0;
}
