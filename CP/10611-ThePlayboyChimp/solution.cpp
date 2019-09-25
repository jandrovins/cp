#include <iostream>
#include <vector>

using namespace std;
int N, q, ladies, tmp, val, queries;
vector<int> l;

#define D(x) cout << #x << " " << x << endl;

int search()
{
    int left = 0, right = ladies, mid;

    while (left < right) {
        mid = (left + right) / 2;

        if (val <= l[mid])
            right = mid;
        else
            left = mid + 1;
    }
    return left - 1;
}

int upper()
{
    int left = 0, right = ladies, mid;

    while (left < right) {
        mid = (left + right) / 2;

        if (val >= l[mid])
            left = mid + 1;
        else
            right = mid;
    }
    return left;
}

int main()
{
    l.reserve(50020);
    ios_base::sync_with_stdio(false);
    cin >> ladies;
    //cout << ladies;
    for (int i = 0; i < ladies; ++i) {
        cin >> tmp;
        //cout << tmp << endl;
        l.push_back(tmp);
    }
    cin >> queries;
    for (int i = 0; i < queries; ++i) {
        if (i != 0)
            printf("\n");

        cin >> val;
        if (ladies == 0) {
            cout << "X X";
            continue;
        }

        int idx = search();

        //if (idx == -1)
        //    printf("X ");
        //else
        //    printf("%d ", l[idx]);

        //if (idx == ladies - 1)
        //    printf("X");
        //else
        //    printf("%d", l[idx]);

        //if (idx == -1) {
        //    printf("X %d", l[0]);
        //    continue;
        //}

        if (l[idx+1] == val) {
            if (idx == ladies - 1) {
                printf("%d X", l[idx]);
                continue;
            }
            if (idx == 1) {
                printf("X %d", l[idx + 2]);
                continue;
            }
            printf("%d %d", l[idx], l[idx + 2]);
            continue;
        }

        if (idx == ladies - 1) {
            printf("%d X", l[idx]);
            continue;
        }
        printf("%d %d", l[idx], l[idx + 1]);
    }
}
