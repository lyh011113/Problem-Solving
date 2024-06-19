#include <iostream>
#include <queue>

int main()
{
    std::queue<int> num;
    int n = 0;
    std::cin >> n;
    for (int i = 1; i <= n; i++)
    {
        num.push(i);
    }

    while (num.size() != 1)
    {
        int temp = 0;
        num.pop();
        if (num.size() == 1)
            break;
        temp = num.front();
        num.pop();
        num.push(temp);
    }

    std::cout << num.front() << std::endl;

    return 0;
}