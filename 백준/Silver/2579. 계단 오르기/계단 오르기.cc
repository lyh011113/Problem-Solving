#include <iostream>
#include <vector>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int N;
    cin >> N;
    vector<int> dp(N + 1, 0);
    vector<int> score(N + 1, 0);

    for (int i = 1; i <= N; i++)
    {
        cin >> score[i];
    }

    dp[1] = score[1];
    dp[2] = max(score[1], score[1] + score[2]);

    for (int i = 3; i <= N; i++)
    {
        dp[i] = max(dp[i - 2], dp[i - 3] + score[i - 1]) + score[i];
    }
    cout << dp[N];
}
