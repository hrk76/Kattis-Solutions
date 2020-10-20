#include <iostream>
#include <cmath>
using namespace std;

int algo(int addends);
int main()
{
	int addends;

	cin >> addends;

	cout << algo(addends);

	return 0;
}

int algo(int addends)
{
	int base, power;
	int total = 0;

	for (int i = 0; i < addends; i++)
	{
		cin >> base;
		power = base % 10;
		base /= 10;
		total += pow(base, power);
	}

	return total;
}