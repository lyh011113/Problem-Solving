#include <iostream>

int main()
{
    int N, M;
    std::cin >> N >> M;
    if ((N * 100) >= M)
    {
        std::cout << "Yes" << std::endl;
    }
    else
    {
        std::cout << "No" << std::endl;
    }
}