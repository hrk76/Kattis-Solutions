#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	int side;
	vector<int> rectangle;

	for (int i = 0; i < 4; i++)
	{
		cin >> side;
		rectangle.push_back(side);
	}

	sort(rectangle.begin(), rectangle.end());

	cout << rectangle[0] * rectangle[2];

	return 0;
}