#include <iostream>

using namespace std;

int Algo(int x, int y)
{
    int minSci;
    minSci = x * (y - 1) + 1;
    return minSci;
}


int main ()
{
    int article, impactFactor;
    cin >> article >> impactFactor;
    cout << Algo(article, impactFactor);
    return 0;
}