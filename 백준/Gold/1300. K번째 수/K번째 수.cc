#include<iostream>
using namespace std;


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int N, K, start, end, middle, sum, ans;
    cin >> N >> K;

    start = 0;
    end = K;
    while (start + 1 < end) {
        sum = 0;
        middle = (start + end) / 2;
        for (int i = 1; i <= N; i++) {
            sum += min(middle / i, N);
        }

        if (sum >= K) {
            end = middle;
        } else {
            start = middle;
        }
    }

    cout << end;
}
