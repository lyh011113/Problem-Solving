#include <iostream>
#include <vector>
using namespace std;

void uni(int a, int b);
int find(int a);

static vector<int> node;
static vector<int> truth;
static vector<vector<int>> party;
static int result;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int N, M, tru, num, temp;

    cin >> N >> M;
    cin >> tru;
    truth.resize(tru);

    for (int i = 0; i < tru; i++)
    {
        cin >> truth[i];
    }

    party.resize(M);

    for (int i = 0; i < M; i++)
    {
        cin >> num;
        for (int j = 0; j < num; j++)
        {
            cin >> temp;
            party[i].push_back(temp);
        }
    }

    node.resize(N + 1);

    for (int i = 1; i <= N; i++)
    {
        node[i] = i;
    }

    for (int i = 0; i < M; i++)
    {
        int first = party[i][0];
        for (int j = 1; j < party[i].size(); j++)
        {
            uni(first, party[i][j]);
        }
    }

    for (int i = 0; i < M; i++)
    {
        bool isPossible = true;
        int cur = party[i][0];

        for (int j = 0; j < tru; j++)
        {
            if (find(cur) == find(truth[j]))
            {
                isPossible = false;
                break;
            }
        }
        if (isPossible)
        {
            result++;
        }
    }
    cout << result;
}

void uni(int a, int b)
{
    a = find(a);
    b = find(b);

    if (a != b)
    {
        node[b] = a;
    }
}

int find(int a)
{
    if (a == node[a])
    {
        return a;
    }
    else
    {
        return node[a] = find(node[a]);
    }
}