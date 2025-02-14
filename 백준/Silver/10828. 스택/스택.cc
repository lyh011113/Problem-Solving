#include <iostream>
#include <vector>
#include <stack>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int N;
    string cmd;
    cin >> N;
    stack<int> stk;

    for (int i = 0; i < N; i++)
    {
        cin >> cmd;

        if (cmd == "push")
        {
            int num;
            cin >> num;
            stk.push(num);
        }
        else if (cmd == "pop")
        {
            if (stk.empty())
            {
                cout << -1 << '\n';
            }
            else
            {
                cout << stk.top() << '\n';
                stk.pop();
            }
        }
        else if (cmd == "size")
        {
            cout << stk.size() << '\n';
        }
        else if (cmd == "empty")
        {
            if (stk.empty())
            {
                cout << '1' << '\n';
            }
            else
            {
                cout << '0' << '\n';
            }
        }
        else
        {
            if (stk.empty())
            {
                cout << -1 << '\n';
            }
            else
            {
                cout << stk.top() << '\n';
            }
        }
    }
}