#include <iostream>

int arr[1000];
int main()
{
    int N;
    int K;
    int inter = 0;
    int count = 0;
    std::cin >> N;
    std::cin >> K;
    std::cout << "<";

    for (int i = 0; count < N; i = (i + 1) % N)
    {
        if (arr[i] == 0)
        {
            inter++;
        }

        if (inter == K)
        {
            arr[i] = 1;
            inter = 0;
            if ((i + 1) % N == 0)
            {
                std::cout << N;
            }
            else
            {
                std::cout << (i + 1) % N;
            }

            count++;
            if (count < N)
            {
                std::cout << ", ";
            }
        }
    }

    std::cout << ">";
}