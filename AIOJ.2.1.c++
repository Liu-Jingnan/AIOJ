#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N ;
    string answer;
    for(;N>=1;N/=2)
    {
        answer = to_string(N%2) + answer;
    }
    cout << answer << endl;
}