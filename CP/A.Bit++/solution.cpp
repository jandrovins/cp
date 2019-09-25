#include <iostream>
#include <string>

using namespace std;
int main()
{
    int X = 0;
    string N;
    getline(cin,N);
    string s;
    for (int i = 0; i < stoi(N); ++i) {
        getline(cin, s, '\n');
        for (int j = 0; j < s.length(); ++j) {
            char a = s[j];
            if (a == 'X') {
                continue;
            } else {
                ++j;
                if (a == '+')
                    ++X;
                else
                    --X;
            }
        }
    }
    cout << X;
}
