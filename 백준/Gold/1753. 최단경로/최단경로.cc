#include <iostream>
#include <queue>
#include <vector>
#include <limits.h>
using namespace std;
typedef pair<int, int> edge;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int N, M, start;
    cin >> N >> M >> start;

    vector<vector<edge>> graph(N + 1);
    vector<bool> visited(N + 1, false);
    vector<int> dist(N + 1, INT_MAX);
    priority_queue<edge, vector<edge>, greater<edge>> pq;

    for (int i = 1; i <= M; i++)
    {
        int a, b, c;
        cin >> a >> b >> c;
        graph[a].push_back(make_pair(b, c));
    }

    pq.push(make_pair(0, start));
    dist[start] = 0;

    while (!pq.empty())
    {
        edge now = pq.top();
        pq.pop();

        int now_n = now.second;
        if (visited[now_n])
        {
            continue;
        }
        visited[now_n] = true;

        for (edge i : graph[now_n])
        {
            edge tmp = i;
            int next = tmp.first;
            int value = tmp.second;

            if (dist[next] > dist[now_n] + value)
            {
                dist[next] = dist[now_n] + value;
                pq.push(make_pair(dist[next], next));
            }
        }
    }

    for (int i = 1; i <= N; i++)
    {
        if (visited[i])
        {
            cout << dist[i] << '\n';
        }
        else
        {
            cout << "INF\n";
        }
    }
}