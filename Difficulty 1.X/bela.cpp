#include <iostream>

using namespace std;

int main()
{
	int hands;
	int points = 0;
	char suit;
	char card[2];

	cin >> hands >> suit;

	for (int i = 0; i < hands * 4; i++)
	{
		cin >> card;

		if (card[1] == suit)
		{
			switch (card[0])
			{
			case 'A':
				points += 11;
				break;

			case 'K':
				points += 4;
				break;

			case 'Q':
				points += 3;
				break;

			case 'J':
				points += 20;
				break;

			case 'T':
				points += 10;
				break;

			case '9':
				points += 14;

			default:
				break;
			}
		}

		else
		{
			switch (card[0])
			{
			case 'A':
				points += 11;
				break;

			case 'K':
				points += 4;
				break;

			case 'Q':
				points += 3;
				break;

			case 'J':
				points += 2;
				break;

			case 'T':
				points += 10;
				break;

			default:
				break;
			}
		}
	}

	cout << points;

	return 0;
}