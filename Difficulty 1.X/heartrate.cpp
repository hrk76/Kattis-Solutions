#include <iostream>

using namespace std;

int main()
{
	int cases;
	double beats, seconds, bpm, abpm;
	cin >> cases;

	for (int i = 0; i < cases; i++)
	{
		cin >> beats >> seconds;
		bpm = 60 * (beats / seconds);
		abpm = 60 / seconds;
		cout << bpm - abpm << " " << bpm << " " << bpm + abpm << endl;
	}

	return 0;
}