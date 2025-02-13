#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cout.tie(0);
    cin.tie(0);
    int N;
    cin >> N;
    vector<pair<int, int>> coor(N);

    for (int i = 0; i < N; i++)
    {
        int x, y;
        cin >> x >> y;
        coor[i].first = x;
        coor[i].second = y;
    }
    sort(coor.begin(), coor.end());

    for (int i = 0; i < N; i++)
    {
        cout << coor[i].first << ' ' << coor[i].second << '\n';
    }
}