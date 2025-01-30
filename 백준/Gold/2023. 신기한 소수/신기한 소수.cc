#include <iostream>
using namespace std;

void DFS(int number, int n);
bool isPrime(int num);
static int N;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> N;
    DFS(2, 1);
    DFS(3, 1);
    DFS(5, 1);
    DFS(7, 1);
}

void DFS(int number, int n)
{
    if (n == N)
    {
        if (isPrime(number))
        {
            cout << number << '\n';
        }
        return;
    }

    for (int i = 1; i < 10; i++)
    {
        if (i % 2 == 0)
        {
            continue;
        }
        if (isPrime(number * 10 + i))
        {
            DFS(number * 10 + i, n + 1);
        }
    }
}

bool isPrime(int num)
{
    for (int i = 2; i <= num / 2; i++)
    {
        if (num % i == 0)
        {
            return false;
        }
    }
    return true;
}