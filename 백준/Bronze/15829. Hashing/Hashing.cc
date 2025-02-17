#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string str;
    int N;
    long long sum;
    cin >> N;
    cin >> str;
    sum = 0;

    for (int i = 0; i < str.size(); i++)
    {
        sum += (str[i] - 'a' + 1) * pow(31, i);
        if (sum >= 1234567891)
        {
            sum %= 1234567891;
        }
    }

    cout << sum;
}