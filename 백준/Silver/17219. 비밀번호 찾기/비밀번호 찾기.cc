#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

int main()
{

    int N, K;

    cin >> N >> K;

    unordered_map<string, string> passwordMap;

    for (int i = 0; i < N; i++)
    {
        string name;
        string password;
        cin >> name >> password;
        passwordMap[name] = password;
    }

    for (int i = 0; i < K; i++)
    {
        string temp;
        cin >> temp;
        cout << passwordMap[temp] << endl;
    }
}