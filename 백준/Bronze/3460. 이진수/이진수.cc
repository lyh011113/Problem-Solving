#include <iostream>

int main()
{
    int n;
    std::cin >> n;

    for (int i = 0; i < n; i++)
    {
        int binary, loc = 0;
        std::cin >> binary;

        while (binary != 0)
        {
            if (binary % 2 == 1)
            {
                std::cout << loc << " ";
            }
            loc++;
            binary /= 2;
        }
    }
}