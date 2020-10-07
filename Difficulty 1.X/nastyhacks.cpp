#include <iostream>

using namespace std;

int main()
{
	int cases, revNoAd, revAd, adCost, profitAd;

	cin >> cases;

	for (int i = 0; i < cases; i++)
	{
		cin >> revNoAd >> revAd >> adCost;
		profitAd = revAd - adCost;
		if (revNoAd > profitAd)
		{
			cout << "\ndo not advertise\n";
		}
		else if (revNoAd < profitAd)
		{
			cout << "\nadvertise\n";
		}
		else
		{
			cout << "\ndoes not matter\n";
		}
	}

	return 0;
}