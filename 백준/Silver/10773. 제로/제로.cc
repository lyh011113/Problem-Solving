#include <iostream>
#include <stack>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int N;
    cin >> N;
    stack<int> st;

    for (int i = 0; i < N; i++)
    {
        int temp;
        cin >> temp;
        if (temp != 0)
        {
            st.push(temp);
        }
        else
        {
            st.pop();
        }
    }

    int sum = 0;

    while (!st.empty())
    {
        sum += st.top();
        st.pop();
    }

    cout << sum;
}