#include <iostream>
using namespace std;

int main()
{
    int A, B;
    while (cin >> A && cin >> B)
    {
        if (A == 0 && B == 0)
        {
            break;
        }
        else
        {
            cout << A + B << '\n';
        }
    }
}