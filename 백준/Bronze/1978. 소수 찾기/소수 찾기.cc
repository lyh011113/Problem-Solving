#include <iostream>
#include <cmath>

bool is_Prime(int num)
{
    if (num <= 1)
        return false;
    if (num == 2)
        return true;
    if (num % 2 == 0)
        return false;
    for (int i = 3; i <= std::sqrt(num); i += 2)
    {
        if (num / i != 1 && num % i == 0)
            return false;
    }
    return true;
}

int main()
{
    int n = 0;
    int num = 0;
    int count = 0;
    std::cin >> n;

    for (int i = 0; i < n; i++)
    {
        std::cin >> num;
        if (is_Prime(num))
        {
            count++;
        }
    }

    std::cout << count << std::endl;
    return 0;
}