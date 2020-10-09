#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
	int numAu, numAg, numCu, buyingPower;
	vector<string> bestCard;

	cin >> numAu >> numAg >> numCu;
	buyingPower = 3 * numAu + 2 * numAg + numCu;

	// land
	if (buyingPower >= 8)
	{
		bestCard.push_back("Province");
	}
	else if (buyingPower >= 5)
	{
		bestCard.push_back("Duchy");
	}
	else if (buyingPower >= 2)
	{
		bestCard.push_back("Estate");
	}

	// metal
	if (buyingPower >= 6)
	{
		bestCard.push_back("Gold");
	}
	else if (buyingPower >= 3)
	{
		bestCard.push_back("Silver");
	}
	else
	{
		bestCard.push_back("Copper");
	}

	// output
	if (bestCard.size() > 1)
	{
		cout << bestCard[0] << " or " << bestCard[1];
	}

	else
	{
		cout << bestCard[0];
	}

	return 0;
}