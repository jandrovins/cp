#include <iostream>
#include <string>
#include <vector>

using namespace std;

string A;
string B;

int lastTotal = 0;
int total = 0;

int main()
{
    cin >> A >> B;

    for (int i = 0; i < A.length(); ++i) {
        char a = A[i];
        for (int j = 0; i < B.length(); i++) {
            char b = B[j];
            if (a != b) {
                ++total;
            } else {
                if (total <= lastTotal)
                    total = 0;
                else {
                    lastTotal = total;
                    total = 0;
                }
            }
        }
    }
}
