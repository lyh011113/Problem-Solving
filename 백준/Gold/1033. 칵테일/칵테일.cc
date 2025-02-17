#include <iostream>
#include <vector>
#include <tuple>
using namespace std;

long gcd(long a, long b)
{
    if (b == 0)
    {
        return a;
    }
    else
    {
        return gcd(b, a % b);
    }
}

vector<tuple<int, int, int>> A[10];
long lcm;
bool visited[10];
long D[10];
void DFS(int node);

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int N;
    cin >> N;
    lcm = 1;

    for (int i = 0; i < N - 1; i++)
    {
        int a, b, p, q;
        cin >> a >> b >> p >> q;
        A[a].push_back(make_tuple(b, p, q));
        A[b].push_back(make_tuple(a, q, p));

        lcm *= p * q / gcd(p, q);
    }

    D[0] = lcm;
    DFS(0);
    long mgcd = D[0];

    for (int i = 1; i < N; i++)
    {
        mgcd = gcd(mgcd, D[i]);
    }

    for (int i = 0; i < N; i++)
    {
        cout << D[i] / mgcd << ' ';
    }
}

void DFS(int node)
{
    visited[node] = true;

    for (tuple<int, int, int> i : A[node])
    {
        int next = get<0>(i);
        if (!visited[next])
        {
            D[next] = D[node] * get<2>(i) / get<1>(i);
            DFS(next);
        }
    }
}