#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	int leftSide, rightSide;

	cin >> leftSide >> rightSide;

	if (leftSide == rightSide)
	{
		if (leftSide == 0)
		{
			cout << "Not a moose";
		}

		else
		{
			cout << "Even " << 2 * leftSide;
		}
	}
	else
	{
		cout << "Odd " << 2 * max(leftSide, rightSide);
	}

	return 0;
}