#include <iostream>
#include <sstream>
#include <string>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    string n;
    int ans = 0;
    getline(cin, n);
    istringstream iss(n);
    string s;

    while (iss >> s)
    {
        ans++;
    }

    cout << ans;
}