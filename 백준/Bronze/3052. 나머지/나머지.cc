#include <iostream>
#include <vector>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    vector mod(42, 0);
    int N, cnt;
    cnt = 0;

    for (int i = 0; i < 10; i++)
    {
        cin >> N;
        mod[N % 42]++;
    }

    for (int i = 0; i < 42; i++)
    {
        if (mod[i] != 0)
        {
            cnt++;
        }
    }
    cout << cnt;
}