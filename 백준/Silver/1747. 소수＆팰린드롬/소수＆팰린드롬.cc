#include <iostream>
#include <vector>
#include <string>
#include <cmath>

using namespace std;

bool isPalin(int num);

int main()
{
    long N;
    cin >> N;
    vector<long> A(10000001);

    for (int i = 2; i < 10000001; i++)
    {
        A[i] = i;
    }

    for (int i = 2; i < sqrt(10000001) + 1; i++)
    {
        if (A[i] == 0)
            continue;
        for (int j = i * 2; j < 10000001; j += i)
        {
            A[j] = 0;
        }
    }
    int i = N;
    while (1)
    {
        if (A[i] != 0)
        {
            int result = A[i];
            if (isPalin(result))
            {
                cout << result;
                break;
            }
        }
        i++;
    }
}

bool isPalin(int num)
{
    string number = to_string(num);
    int s = 0, e = number.size() - 1;

    while (s < e)
    {
        if (number[s] != number[e])
        {
            return false;
        }
        s++;
        e--;
    }

    return true;
}