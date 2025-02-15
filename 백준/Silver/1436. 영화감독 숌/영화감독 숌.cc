#include <iostream>
#include <string>
using namespace std;

int main()
{

    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int N;
    cin >> N;

    int count = 0;
    int number = 665;
    while (true)
    {
        number++;

        if (to_string(number).find("666") != string::npos)
        {
            count++;
            if (count == N)
            {
                cout << number << "\n";
                break;
            }
        }
    }

    return 0;
}
