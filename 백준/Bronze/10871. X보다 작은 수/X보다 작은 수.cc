#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int N, X, temp;

    cin >> N >> X;

    for (int i = 0; i < N; i++)
    {
        cin >> temp;
        if (temp < X)
        {
            cout << temp << ' ';
        }
    }
}