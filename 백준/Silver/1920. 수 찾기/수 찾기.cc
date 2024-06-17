#include <iostream>
#include <algorithm>
#include <cstdio>

int N[100000];
int M[100000];

int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &N[i]);
    }
    int m;
    scanf("%d", &m);
    for (int i = 0; i < m; i++)
    {
        scanf("%d", &M[i]);
    }
    std::sort(N, N + n);

    for (int i = 0; i < m; i++)
    {
        bool isFound = std::binary_search(N, N + n, M[i]);
        if (isFound)
        {
            printf("1\n");
        }
        else
        {
            printf("0\n");
        }
    }

    return 0;
}
