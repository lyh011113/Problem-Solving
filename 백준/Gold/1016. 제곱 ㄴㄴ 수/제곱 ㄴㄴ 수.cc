#include <iostream>
#include <vector>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    long long min, max;
    cin >> min >> max;

    vector<bool> A(max - min + 1);

    for (long long i = 2; i * i <= max; i++)
    {
        long long pow = i * i;
        long long start_index = min / pow;

        if (min % pow != 0)
            start_index++;

        for (long long j = start_index; pow * j <= max; j++)
        {
            A[(size_t)((j * pow) - min)] = true;
        }
    }

    int count = 0;

    for (int i = 0; i < A.size(); i++)
    {
        if (!A[i])
        {
            count++;
        }
    }

    cout << count;

    return 0;
}
