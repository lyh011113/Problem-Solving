#include <iostream>
#include <string>
#include <map>
using namespace std;

int main()
{
    int N, K, num = 0;
    cin >> N >> K;
    map<string, string> m;
    map<string, string> result;
    map<string, string>::iterator it;

    for (int i = 0; i < N; i++)
    {
        string temp;
        cin >> temp;
        m[temp] = i;
    }

    for (int i = 0; i < K; i++)
    {
        string temp;
        cin >> temp;
        if (!m[temp].empty())
        {
            result[temp] = temp;
            num++;
        }
    }
    cout << num<<'\n';
    for (it = result.begin(); it != result.end(); it++)
    {
        cout << it->first << '\n';
    }
}