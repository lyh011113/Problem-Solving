#include <iostream>
#include <vector>
using namespace std;

static vector<int> node;
void unionf(int n1, int n2);
int find(int n);
bool check(int n1, int n2);

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int N, M, sel, n1, n2;
    cin >> N >> M;
    node.resize(N + 1);

    for (int i = 1; i <= N; i++)
    {
        node[i] = i;
    }

    for (int i = 0; i < M; i++)
    {
        cin >> sel >> n1 >> n2;
        if (sel == 0)
        {
            unionf(n1, n2);
        }
        else
        {
            if (check(n1, n2))
            {
                cout << "YES" << '\n';
            }
            else
            {
                cout << "NO" << '\n';
            }
        }
    }
}

void unionf(int n1, int n2)
{
    n1 = find(n1);
    n2 = find(n2);
    if (n1 != n2)
    {
        node[n2] = n1;
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

bool check(int n1, int n2)
{
    n1 = find(n1);
    n2 = find(n2);

    if (n1 == n2)
    {
        return true;
    }

    return false;
}