#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main()
{
	string names;
	string shortName = "";

	cin >> names;

	for (int i = 0; i < names.length(); i++)
	{
		if (isupper(names[i]))
		{
			shortName += names[i];
		}
	}

	cout << shortName;

	return 0;
}