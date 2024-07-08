#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false); // 입출력 동기화 비활성화
    cin.tie(NULL); // 입출력 비동기화

    int N, M;
    cin >> N >> M;

    int *arr = new int[N];
    int min = 0;
    int max = 0;
    int mid;
    long long calculate;

    for (int i = 0; i < N; i++)
    {
        cin >> arr[i];
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }

    while (min <= max)
    {
        mid = (min + max) / 2;
        calculate = 0;

        for (int i = 0; i < N; i++)
        {
            if (arr[i] > mid)
            {
                calculate += (arr[i] - mid);
            }
        }

        if (calculate >= M)
        {
            min = mid + 1;
        }
        else
        {
            max = mid - 1;
        }
    }

    cout << max << endl;

    delete[] arr;
    return 0;
}