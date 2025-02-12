#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int T;
    cin >> T;

    for (int i = 0; i < T; i++)
    {
        int B_N, S_N;
        int B, S, R;
        cin >> S >> B;
        B_N = B;
        S_N = S;

        while (B % S != 0)
        {
            R = B % S;
            B = S;
            S = R;
        }

        cout << B_N * S_N / S << '\n';
    }
}