#include <cstdlib>
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> V;
    int N;
    cin >> N;
    V.reserve(N);

    int tmp;
    for (int i = 0; i < N; ++i) {
        cin >> tmp;
        V.push_back(tmp);
    }

    int prev;
    int next;
    int actual;


    for (int i = 0; i < N; ++i) {
        if(i == 0){
            prev = V[0];
        }else{
            prev = V[i-1];
        }
        actual = V[i];
        next = V[i + 1];
        int abs_prev = abs(actual - prev);
        int abs_next = abs(actual - next);
        if (abs_prev < abs_next && i != 0) {
            cout << abs_prev;
        } else if(i != N-1){
            cout << abs_next;
        }else{
            cout << abs_prev;
        }
        cout << " ";
        int abs_last = abs(actual - V[N - 1]);
        int abs_first = abs(actual - V[0]);
        if (abs_last > abs_first) {
            cout << abs_last;
        } else {
            cout << abs_first;
        }

        if (i != N - 1)
            cout << endl;
    }
}
