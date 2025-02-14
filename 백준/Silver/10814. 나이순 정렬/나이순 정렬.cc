#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int N, age;
    string name;
    cin >> N;

    vector<pair<int, string>> cus(N);

    for (int i = 0; i < N; i++)
    {
        cin >> age >> name;
        cus[i].first = age;
        cus[i].second = name;
    }

    stable_sort(cus.begin(), cus.end(), [](const pair<int, string> &a, const pair<int, string> &b)
                { return a.first < b.first; });

    for (auto &p : cus)
    {
        cout << p.first << ' ' << p.second << '\n';
    }

    return 0;
}
