#include <iostream>

void fibonacci(int n)
{
    int a = 0;
    int b = 1;
    int c;
    for (int i = 0; i < n - 1; i++)
    {
        c = a + b;
        a = b;
        b = c;
    }
    std::cout << a << " " << c << std::endl;
}

int main()
{
    int num;
    std::cin >> num;
    for (int i = 0; i < num; i++)
    {
        int fibo;
        std::cin >> fibo;
        if (fibo == 0)
        {
            std::cout << 1 << " " << 0 << std::endl;
        }
        else if (fibo == 1)
        {
            std::cout << 0 << " " << 1 << std::endl;
        }
        else
        {
            fibonacci(fibo);
        }
    }
}