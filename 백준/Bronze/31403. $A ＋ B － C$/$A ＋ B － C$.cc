#include <iostream>
#include <string>
using namespace std;

int main()
{
    int A, B, C;
    string sum;
    cin >> A >> B >> C;
    sum = to_string(A) + to_string(B);

    cout << A + B - C << '\n';
    A = stoi(sum);
    cout << A - C;
}