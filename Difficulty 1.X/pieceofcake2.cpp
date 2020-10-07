#include <iostream>

using namespace std;

int main()
{
	int cakeSide, cutVertical, cutHorizontal;

	cin >> cakeSide >> cutVertical >> cutHorizontal;

	if (cutVertical < cakeSide - cutVertical)
	{
		cutVertical = cakeSide - cutVertical;
	}

	if (cutHorizontal < cakeSide - cutHorizontal)
	{
		cutHorizontal = cakeSide - cutHorizontal;
	}

	cout << cutVertical * cutHorizontal * 4;

	return 0;
}