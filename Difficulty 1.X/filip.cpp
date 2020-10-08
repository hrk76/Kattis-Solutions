#include <iostream>

using namespace std;

int Reverse(int userNum);

int main()
{
	int num1, num2;
	cin >> num1 >> num2;

	num1 = Reverse(num1);
	num2 = Reverse(num2);

	if (num1 > num2)
	{
		cout << num1;
	}
	else
	{
		cout << num2;
	}

	return 0;
}

int Reverse(int userNum)
{
	int remainder;
	int reverse = 0;

	while (userNum != 0)
	{
		remainder = userNum % 10;
		reverse = 10 * reverse + remainder;
		userNum /= 10;
	}

	return reverse;
}