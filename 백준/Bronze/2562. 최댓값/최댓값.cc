#include <iostream>
using namespace std;

int main()
{
    int num, max, index;
    max = 0;
    for (int i = 1; i <= 9; i++)
    {
        cin >> num;
        if (num > max)
        {
            max = num;
            index = i;
        }
    }

    cout << max << '\n'
         << index;
}