#include <iostream>
#include <string>
using namespace std;

int main() {
    ios::sync_with_stdio(false); // 입출력 동기화 비활성화
    cin.tie(NULL); // 입출력 비동기화

    int M, x;
    string cmd;
    unsigned int s = 0; // 비트마스크를 사용하여 집합을 관리

    cin >> M;
    for (int i = 0; i < M; ++i) {
        cin >> cmd;
        if (cmd == "add") {
            cin >> x;
            s |= (1 << x); // x번째 비트를 1로 설정
        } else if (cmd == "remove") {
            cin >> x;
            s &= ~(1 << x); // x번째 비트를 0으로 설정
        } else if (cmd == "check") {
            cin >> x;
            cout << ((s & (1 << x)) ? 1 : 0) << '\n'; // x번째 비트가 1인지 확인
        } else if (cmd == "toggle") {
            cin >> x;
            s ^= (1 << x); // x번째 비트를 토글
        } else if (cmd == "all") {
            s = (1 << 21) - 1; // 모든 비트를 1로 설정 (21개의 비트)
        } else if (cmd == "empty") {
            s = 0; // 모든 비트를 0으로 설정
        }
    }

    return 0;
}