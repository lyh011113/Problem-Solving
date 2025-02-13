#include <iostream>
#include <queue>
#include <algorithm>
#include <vector>
using namespace std;

void BFS(int node);
static vector<vector<int>> A;
static vector<int> ans;
static vector<int> visited;

int main()
{

    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int N, M, K, X;
    cin >> N >> M >> K >> X;
    A.resize(N + 1);

    for (int i = 0; i < M; i++)
    {
        int S, E;
        cin >> S >> E;
        A[S].push_back(E);
    }

    visited.resize(N + 1);

    for (int i = 0; i <= N; i++)
    {
        visited[i] = -1;
    }

    BFS(X);

    for (int i = 0; i <= N; i++)
    {
        if (visited[i] == K)
        {
            ans.push_back(i);
        }
    }
    if (ans.empty())
    {
        cout << -1;
    }
    else
    {
        sort(ans.begin(), ans.end());
        for (int temp : ans)
        {
            cout << temp << '\n';
        }
    }
}

void BFS(int node)
{
    queue<int> mq;
    mq.push(node);
    visited[node]++;

    while (!mq.empty())
    {
        int now_node = mq.front();
        mq.pop();

        for (int i : A[now_node])
        {
            if (visited[i] == -1)
            {
                visited[i] = visited[now_node] + 1;
                mq.push(i);
            }
        }
    }
}