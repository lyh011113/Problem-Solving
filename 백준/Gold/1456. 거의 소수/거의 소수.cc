#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long A, B;
    cin >> A >> B;
    int maxPrime = sqrt(B) + 1;
    vector<long long> arr(maxPrime + 1, 0);

    for (int i = 2; i <= maxPrime; i++)
        arr[i] = i;
    for (int i = 2; i * i <= maxPrime; i++)
    {
        if (arr[i] == 0)
            continue;
        for (int j = i + i; j <= maxPrime; j += i)
            arr[j] = 0;
    }

    int count = 0;
    for (int i = 2; i <= maxPrime; i++)
    {
        if (arr[i] != 0)
        {
            long long p = arr[i], cur = p * p;
            while (cur <= B)
            {
                if (cur >= A)
                    count++;
                if (cur > B / p)
                    break;
                cur *= p;
            }
        }
    }

    cout << count;
    return 0;
}
