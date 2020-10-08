#include <iostream>

using namespace std;

int main()
{
	int kings, queens, rooks, bishops, knights, pawns;

	cin >> kings >> queens >> rooks >> bishops >> knights >> pawns;

	cout << -kings + 1 << " " << -queens + 1 << " " << -rooks + 2 << " " 
		 << -bishops + 2 << " " << -knights + 2 << " " << -pawns + 8;

	return 0;
}