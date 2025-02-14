#include <iostream>
#include <vector>
#define bias 10000000
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int N, M, temp;
    vector<int> buk(20000001, 0);
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        cin >> temp;
        buk[temp + bias]++;
    }
    cin >> M;
    for (int i = 0; i < M; i++)
    {
        cin >> temp;
        cout << buk[temp + bias] << ' ';
    }
}