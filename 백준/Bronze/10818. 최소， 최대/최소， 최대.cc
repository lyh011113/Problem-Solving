#include <iostream>
using namespace std;

int main()
{
    int N, min, max;
    cin >> N;
    min = 1000000;
    max = -1000000;
    for (int i = 0; i < N; i++)
    {
        int temp;
        cin >> temp;
        if (temp > max)
        {
            max = temp;
        }
        if (temp < min)
        {
            min = temp;
        }
    }

    cout << min << ' ' << max;
}