#include <iostream>

using namespace std;

int SumDigits(int userNum);

int main()
{
	int min, max, digits;
	int minSum = 0;
	int maxSum = 0;

	cin >> min >> max >> digits;

	for (int i = min; i <= max; i++)
	{
		if (digits == SumDigits(i))
		{
			cout << i << endl;
			break;
		}
	}

	for (int i = max; i >= min; i--)
	{
		if (digits == SumDigits(i))
		{
			cout << i << endl;
			break;
		}
	}

	return 0;
}

int SumDigits(int userNum)
{
	int sum = 0;

	while (userNum != 0)
	{
		sum += userNum % 10;
		userNum /= 10;
	}

	return sum;
}