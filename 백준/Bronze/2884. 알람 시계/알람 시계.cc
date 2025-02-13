#include <iostream>
using namespace std;

int main()
{
    int H, M;
    cin >> H >> M;

    M -= 45;

    if (M >= 0)
    {
        cout << H << ' ' << M;
    }
    else
    {
        if (H == 0)
        {
            cout << H - 1 + 24 << ' ' << M + 60;
        }
        else
        {
            cout << H - 1 << ' ' << M + 60;
        }
    }
}