#include <iostream>
#include <string>

using namespace std;

int main()
{
	int day;
	string month;

	cin >> month >> day;

	if ((month == "OCT" && day == 31) || (month == "DEC" && day == 25))
	{
		cout << "yup";
	}
	else
	{
		cout << "nope";
	}

	return 0;
}