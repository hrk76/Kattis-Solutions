#define _USE_MATH_DEFINES

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int wallHeight, angle;

	cin >> wallHeight >> angle;

	cout << ceil(wallHeight / sin(angle * M_PI / 180));

	return 0;
}