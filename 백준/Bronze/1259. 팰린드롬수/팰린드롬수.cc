#include <iostream>
#include <string>

int main()
{
    while (true)
    {
        std::string number;
        std::cin >> number;

        if (number == "0")
        {
            break;
        }

        bool flag = true;
        int length = number.length();

        for (int i = 0; i < length / 2; i++)
        {
            if (number[i] != number[length - 1 - i])
            {
                flag = false;
                break;
            }
        }
        if (flag)
        {
            std::cout << "yes" << std::endl;
        }
        else
        {
            std::cout << "no" << std::endl;
        }
    }
}