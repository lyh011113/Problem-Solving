#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int N, M;
    cin >> N;
    vector<int> A(N, 0);
    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
    }

    sort(A.begin(), A.end());
    cin >> M;

    for (int i = 0; i < M; i++)
    {
        int num, exist;
        exist = 0;
        cin >> num;
        int start = 0;
        int end = A.size() - 1;
        while (start <= end)
        {
            int midi = (start + end) / 2;
            int midV = A[midi];

            if (midV > num)
            {
                end = midi - 1;
            }
            else if (midV < num)
            {
                start = midi + 1;
            }
            else
            {
                exist = 1;
                break;
            }
        }
        cout << exist << '\n';
    }
}
