#include <iostream>

using namespace std;

int sumArray(int arr[]);

int main()
{
	int sumScore, winner;
	int scores[4] = { 0 };
	int maxScore = 0;

	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			cin >> scores[j];
		}

		sumScore = sumArray(scores);

		if (sumScore > maxScore)
		{
			winner = i + 1;
			maxScore = sumScore;
		}
	}
	
	cout << winner << " " << maxScore;

	return 0;
}

int sumArray(int arr[])
{
	int sum = 0;

	for (int i = 0; i < 4; i++)
	{
		sum += arr[i];
	}

	return sum;
}