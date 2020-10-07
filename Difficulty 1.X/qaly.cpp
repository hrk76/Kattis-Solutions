#include <iostream>

using namespace std;

int main()
{
    int periodsQOL;
    double valQOL, years;
    double sumQOL = 0;

    cin >> periodsQOL;

    for (int i = 0; i < periodsQOL; i++)
    {
        cin >> valQOL >> years;
        sumQOL += valQOL * years;
    }

    cout << sumQOL;

    return 0;
}


