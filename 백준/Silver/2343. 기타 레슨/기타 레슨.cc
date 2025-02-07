#include <iostream>
#include <vector>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int N, M, start, end, middle;
    cin >> N >> M;
    vector<int> A(N, 0);
    start = end = 0;
    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
        end += A[i];
        if (start < A[i])
            start = A[i];
    }

    while (start <= end)
    {
        middle = (start + end) / 2;
        int sum = 0;
        int count = 0;
        for (int i = 0; i < N; i++)
        {
            if (sum + A[i] > middle)
            {
                count++;
                sum = 0;
            }

            sum += A[i];
        }

        if (sum != 0)
        {
            count++;
        }

        if (count > M)
        {
            start = middle + 1;
        }
        else
        {
            end = middle - 1;
        }
    }

    cout << start;
}