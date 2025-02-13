#include <iostream>
using namespace std;
int main()
{
    int T, H, W, N, h, w;
    cin >> T;
    for (int i = 0; i < T; i++)
    {
        cin >> H >> W >> N;
        h = N % H;
        w = N / H;
        if (h != 0)
        {
            w += 1;
        }

        if (h == 0)
        {
            cout << 100 * H + w << '\n';
        }
        else
        {
            cout << 100 * h + w << '\n';
        }
    }
}