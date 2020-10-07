#include <iostream>
#include <string>

using namespace std;

int main()
{
    int numContestants, numProblems;
    string userAnswer;

    cin >> numContestants >> numProblems;

    for (int i = 0; i < numContestants; i++)
    {
        cin >> userAnswer;
    }

    cout << numProblems;

    return 0;
}


