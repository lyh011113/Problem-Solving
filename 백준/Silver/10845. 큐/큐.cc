#include <iostream>
#include <queue>
using namespace std;

int main()
{
    int N;
    cin >> N;
    string cmd;
    queue<int> queue;
    for (int i = 0; i < N; i++)
    {
        cin >> cmd;
        if (cmd == "push")
        {
            int n;
            cin >> n;
            queue.push(n);
        }
        else if (cmd == "pop")
        {
            if (queue.empty())
            {
                cout << -1 << '\n';
            }
            else
            {
                cout << queue.front() << '\n';
                queue.pop();
            }
        }
        else if (cmd == "size")
        {
            cout << queue.size() << '\n';
        }
        else if (cmd == "empty")
        {
            if (queue.empty())
            {
                cout << 1 << '\n';
            }
            else
            {
                cout << 0 << '\n';
            }
        }
        else if (cmd == "front")
        {
            if (queue.empty())
            {
                cout << -1 << '\n';
            }
            else
            {
                cout << queue.front() << '\n';
            }
        }
        else
        {
            {
                if (queue.empty())
                {
                    cout << -1 << '\n';
                }
                else
                {
                    cout << queue.back() << '\n';
                }
            }
        }
    }
}