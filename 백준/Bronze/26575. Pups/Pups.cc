#include <iostream>
#include <iomanip> // Include the <iomanip> header for std::setprecision

int main()
{
    int n;
    std::cin >> n;

    for (int i = 0; i < n; i++)
    {
        double d, f, p;

        std::cout << std::fixed << std::setprecision(2); // Set precision to 2 decimal places
        std::cin >> d >> f >> p;

        std::cout << "$" << (d * f * p) << std::endl;
    }
}
