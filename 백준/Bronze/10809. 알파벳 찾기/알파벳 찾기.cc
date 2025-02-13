#include <iostream>
#include <vector>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string str;
    cin >> str;

    vector c(26, -1);

    for (int i = 0; i < str.size(); i++)
    {
        if (c[str[i] - 'a'] == -1)
        {
            c[str[i] - 'a'] = i;
        }
    }

    for (int i = 0; i < 26; i++)
    {
        cout << c[i] << ' ';
    }
}