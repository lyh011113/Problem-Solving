#include <iostream>

long long coin[10];

int main()
{

    long long N;
    long long K;
    long long num = 0;

    std::cin >> N;
    std::cin >> K;

    for (int i = 0; i < N; i++)
    {
        std::cin >> coin[i];
    }

    for (int i = N - 1; i >= 0; i--)
    {
        int temp = coin[i];

        if (temp <= K)
        {
            num += (K / temp);
            K %= temp;
        }

        if (K == 0)
        {
            std::cout << num;
            return 0;
        }
    }
}