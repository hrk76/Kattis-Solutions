#include <iostream>
#include <string>

using namespace std;

int main()
{
    int numContestants;
    int numProblems;
    string userAnswer;

    cin >> numContestants;
    cin >> numProblems;

    for (int i = 0; i < numContestants; i++)
    {
        cin >> userAnswer;
    }

    cout << numProblems;

    return 0;
}


