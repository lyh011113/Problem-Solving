#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int N, M;
    cin >> M >> N;
    vector<int> A(N + 1, 0);

    for (int i = 2; i <= N; i++)
    {
        A[i] = i;
    }

    for (int i = 2; i <= sqrt(N); i++)
    {
        if (A[i] == 0)
        {
            continue;
        }

        for (int j = i + i; j <= N; j += i)
        {
            A[j] = 0;
        }
    }

    for (int i = M; i <= N; i++)
    {
        if (A[i] != 0)
        {
            cout << i << '\n';
        }
    }
}