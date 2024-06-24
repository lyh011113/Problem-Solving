#include <iostream>

int main()
{
    int N;
    int K;
    int result = 1;
    std::cin >> N;
    std::cin >> K;
    for (int i = 1; i < N + 1; i++)
        result *= i;
    for (int i = 1; i < K + 1; i++)
        result /= i;
    for (int i = 1; i < N - K + 1; i++)
        result /= i;

    std::cout << result << std::endl;
}