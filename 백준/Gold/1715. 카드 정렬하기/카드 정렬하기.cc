#include <iostream>
#include <queue>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int N;
    cin >> N;
    priority_queue<int, vector<int>, greater<int>> pq;

    for (int i = 0; i < N; i++)
    {
        int temp;
        cin >> temp;
        pq.push(temp);
    }

    int a, b, sum = 0;

    while (pq.size() != 1)
    {
        a = pq.top();
        pq.pop();
        b = pq.top();
        pq.pop();
        sum += (a + b);
        pq.push(a + b);
    }
    cout << sum;
}