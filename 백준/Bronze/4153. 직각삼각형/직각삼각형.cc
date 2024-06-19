#include <iostream>

int main()
{

    int a, b, c = 0;

    while (1)
    {
        std::cin >> a;
        std::cin >> b;
        std::cin >> c;
        if ((a == 0 && b == 0 && c == 0))
            break;
        if ((a * a == b * b + c * c) || (b * b == a * a + c * c) || (c * c == b * b + a * a))
        {
            std::cout << "right" << std::endl;
        }
        else
        {
            std::cout << "wrong" << std::endl;
        }
    }

    return 0;
}