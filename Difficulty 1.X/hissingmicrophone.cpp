#include <iostream>
#include <string>

using namespace std;

int main()
{
	string userWord;
	string hissState = "no hiss";
	int loopCounter = 0;
	cin >> userWord;

	while (loopCounter < userWord.length() - 1)
	{
		if (userWord[loopCounter] == 's' && userWord[loopCounter] == userWord[loopCounter + 1])
		{
			hissState = "hiss";
			break;
		}

		loopCounter++;
	}

	cout << hissState;

	return 0;
}