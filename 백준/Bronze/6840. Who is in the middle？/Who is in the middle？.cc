#include <iostream>
#include <algorithm>

int main()
{
    int bowl[3];

    std::cin >> bowl[0] >> bowl[1] >> bowl[2];

    std::sort(bowl, bowl + 3);

    std::cout << bowl[1] << std::endl;

    return 0;
}