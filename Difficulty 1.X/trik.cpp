#include <iostream>
#include <string>

using namespace std;

int main()
{
    bool ballPosition[3] = { true, false, false };
    string moves;
    cin >> moves;

    for (int i = 0; i < moves.length(); i++)
    {
        if (moves[i] == 'A')
        {
            swap(ballPosition[0], ballPosition[1]);
        }
        else if (moves[i] == 'B')
        {
            swap(ballPosition[1], ballPosition[2]);
        }
        else if (moves[i] == 'C')
        {
            swap(ballPosition[0], ballPosition[2]);
        }
    }

    if (ballPosition[0])
    {
        cout << 1;
    }
    else if (ballPosition[1])
    {
        cout << 2;
    }
    else
    {
        cout << 3;
    }

    return 0;
}


