#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int num;
    cin >> num;
    for (int i = 1; i <= num; i++)
    {
        cout << right << setw(num + 1 - i);
        for (int j = 1; j <= i; j++)
        {
            cout << '*';
        }
        cout << '\n';
    }
}
