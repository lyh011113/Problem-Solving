#include <iostream>

int main()
{
    int N, S, M, L, XL, XXL, XXXL, T, P, R;
    R = 0;
    std::cin >> N;
    std::cin >> S;
    std::cin >> M;
    std::cin >> L;
    std::cin >> XL;
    std::cin >> XXL;
    std::cin >> XXXL;
    std::cin >> T;
    std::cin >> P;

    if (S % T != 0)
    {
        R++;
    }
    if (M % T != 0)
    {
        R++;
    }
    if (L % T != 0)
    {
        R++;
    }
    if (XL % T != 0)
    {
        R++;
    }
    if (XXL % T != 0)
    {
        R++;
    }
    if (XXXL % T != 0)
    {
        R++;
    }

    std::cout << S / T + M / T + L / T + XL / T + XXL / T + XXXL / T + R << std::endl;
    std::cout << N / P << " " << N % P << std::endl;
    return 0;
}