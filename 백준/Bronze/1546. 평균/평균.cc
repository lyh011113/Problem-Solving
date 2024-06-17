#include <iostream>

int subject[1001];

int main()
{
    int n;
    std::cin >> n;
    int max = 0;
    double expect = 0;
    for (int i = 0; i < n; i++)
    {
        std::cin >> subject[i];
        if (subject[i] > max)
        {
            max = subject[i];
        }
    }

    for (int i = 0; i < n; i++)
    {
        expect += subject[i];
    }

    std::cout << (expect / (n * max)) * 100 << std::endl;

    return 0;
}