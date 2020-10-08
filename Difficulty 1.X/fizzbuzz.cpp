#include <iostream>

using namespace std;

int main()
{
	int num1, num2, finalNum;

	cin >> num1 >> num2 >> finalNum;

	for (int i = 1; i < finalNum + 1; i++)
	{
		if (i % num1 == 0 && i % num2 == 0)
		{
			cout << "FizzBuzz" << endl;
		}
		else if (i % num1 == 0)
		{
			cout << "Fizz" << endl;
		}
		else if (i % num2 == 0)
		{
			cout << "Buzz" << endl;
		}
		else
		{
			cout << i << endl;
		}
	}

	return 0;
}