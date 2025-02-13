#include <iostream>
#include <queue>
#include <vector>
using namespace std;

void BFS(int node);
static vector<vector<int>> A;
static vector<int> ans;
static vector<bool> visited;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    long N, M;
    cin >> N >> M;

    A.resize(N + 1);
    ans.resize(N + 1);
    visited.resize(N + 1);

    for (int i = 0; i < M; i++)
    {
        int S, E;
        cin >> S >> E;
        A[S].push_back(E);
    }

    for (int i = 1; i <= N; i++)
    {
        fill(visited.begin(), visited.end(), false);
        BFS(i);
    }

    int maxVal = 0;

    for (int i = 1; i <= N; i++)
    {
        maxVal = max(maxVal, ans[i]);
    }

    for (int i = 1; i <= N; i++)
    {
        if (ans[i] == maxVal)
        {
            cout << i << ' ';
        }
    }
}

void BFS(int node)
{
    queue<int> myqueue;
    myqueue.push(node);
    visited[node] = true;

    while (!myqueue.empty())
    {
        int now_node = myqueue.front();
        myqueue.pop();
        for (int i : A[now_node])
        {
            if (visited[i] == false)
            {
                visited[i] = true;
                ans[i]++;
                myqueue.push(i);
            }
        }
    }
}