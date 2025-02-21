#include <iostream>
#include <vector>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int T;
    cin >> T;

    vector<long long> dp(101, 0);

    dp[1] = 1;
    dp[2] = 1;

    for (int i = 3; i <= 100; i++)
    {
        dp[i] = dp[i - 2] + dp[i - 3];
    }

    for (int i = 0; i < T; i++)
    {
        int tmp;
        cin >> tmp;
        cout << dp[tmp] << '\n';
    }
}