#include <iostream>
#include <list>

using namespace std;
list<int> cadena;

int main()
{
    int b;
    int state = 1;
    while (cin >> b) {
        state = 1;
        list<int> cadena;
        if (b == 0)
            return 0;
        for (int i = 0; i < b; ++i) {
            int bi;
            cin >> bi;
            for (int j = 0; j < bi; j++) {
                cadena.push_back(state);
            }
            if (state == 0)
                state = 1;
            else
                state = 0;
        }

        // Making fibonacci:
        long long n_2 = 1, n_1 = 2;
        long long total = 0;

        list<int>::reverse_iterator it = cadena.rbegin();
        if (*it++ == 1)
            total += n_2;
        if (*it++ == 1)
            total += n_1;

        long long tmp;
        for (; it != cadena.rend(); ++it) {
            tmp = n_2 + n_1;
            tmp %= 524288;
            if (*it == 1) {
                total += tmp;
                total %= 524288;
            }
            n_2 = n_1;
            n_1 = tmp;
        }
        cout << total << endl;
    }
}
