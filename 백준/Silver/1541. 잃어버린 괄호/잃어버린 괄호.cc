#include <iostream>
#include <vector>
#include <string>
#include <sstream>
using namespace std;

vector<string> split(string input, char d);
int mySum(string a);

int main()
{
    ios::sync_with_stdio(0);
    cout.tie(0);
    cin.tie(0);

    int answer = 0;
    string num;
    cin >> num;
    vector<string> str = split(num, '-');

    for (int i = 0; i < str.size(); i++)
    {
        int temp = mySum(str[i]);
        if (i == 0)
        {
            answer += temp;
        }
        else
        {
            answer -= temp;
        }
    }
    cout << answer;
}

vector<string> split(string input, char d)
{
    vector<string> result;
    stringstream mystream(input);
    string splitd;

    while (getline(mystream, splitd, d))
    {
        result.push_back(splitd);
    }

    return result;
}

int mySum(string a)
{
    int sum = 0;
    vector<string> temp = split(a, '+');

    for (int i = 0; i < temp.size(); i++)
    {
        sum += stoi(temp[i]);
    }
    return sum;
}