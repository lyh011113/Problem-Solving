#include <iostream>
#include <unordered_map>
#include <vector>
#include <algorithm>
using namespace std;

bool isNumber(const string &str) {
    return !str.empty() && all_of(str.begin(), str.end(), ::isdigit);
}

int main() {
    ios::sync_with_stdio(false); // 입출력 동기화 비활성화
    cin.tie(NULL); // 입출력 비동기화

    unordered_map<string, int> numbering;
    vector<string> pokemon;

    int N, M;
    cin >> N >> M;

    pokemon.resize(N + 1); // 1-based indexing을 위해 크기 N+1로 조정

    for (int i = 1; i <= N; i++) {
        string temp;
        cin >> temp;
        pokemon[i] = temp;
        numbering[temp] = i;
    }

    string result;
    for (int i = 0; i < M; i++) {
        string temp;
        cin >> temp;
        if (isNumber(temp)) {
            int num = stoi(temp);
            result += pokemon[num] + '\n';
        } else {
            result += to_string(numbering[temp]) + '\n';
        }
    }

    cout << result;

    return 0;
}