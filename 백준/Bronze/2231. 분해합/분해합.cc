#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    bool check = true;

    string temp;
    int num;

    int N;
    cin >> N;

    for (int i = 1; i <= N; i++)
    {
        num = i;
        temp = to_string(i);
        for (int j = 0; j < temp.size(); j++)
        {
            num += temp[j] - '0';
        }
        if (num == N)
        {
            cout << i;
            check = false;
            break;
        }
    }

    if (check)
    {
        cout << 0;
    }
}