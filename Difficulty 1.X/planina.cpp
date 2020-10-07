#include <iostream>

using namespace std;

int main()
{
	int iterations;
	int dots = 2;
	cin >> iterations;

	for (int i = 0; i < iterations; i++)
	{
		dots *= 2;
		dots--;
	}

	cout << dots * dots;

	return 0;
}