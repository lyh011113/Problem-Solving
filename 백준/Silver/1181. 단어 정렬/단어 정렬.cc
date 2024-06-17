#include <iostream>
#include <string>
#include <algorithm>

std::string words[20000];

bool compare(const std::string &a, const std::string &b)
{
    if (a.length() == b.length())
        return a < b;
    return a.length() < b.length();
}

int main()
{
    int n;
    std::cin >> n;

    for (int i = 0; i < n; i++)
    {
        std::cin >> words[i];
    }

    std::sort(words, words + n, compare);

    std::cout << words[0] << std::endl;

    for (int i = 1; i < n; i++)
    {
        if (words[i - 1] != words[i])
        {
            std::cout << words[i] << std::endl;
        }
    }
    return 0;
}