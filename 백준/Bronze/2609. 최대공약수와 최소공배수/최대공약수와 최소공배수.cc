#include <iostream>

int gcd(int a, int b)
{
    int r = 1;

    if (a < b)
    {
        int temp = a;
        a = b;
        b = temp;
    }

    while (r != 0)
    {
        r = a % b;
        a = b;
        b = r;
    }

    return a;
}

int lcm(int a, int b)
{
    return a * b / gcd(a, b);
}

int main()
{
    int a, b;
    std::cin >> a;
    std::cin >> b;
    std::cout << gcd(a, b) << std::endl;
    std::cout << lcm(a, b) << std::endl;
}