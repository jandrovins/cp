#include <iostream>
#include <vector>

using namespace std;

vector<int> lamps;
int n, len;

vector<int> merge_sort(int l, int r);

int main()
{
    lamps.reserve(1000);
    cin >> n >> len;
    int pl;
    for (int i = 0; i < n; ++i) {
        cin >> pl;
        lamps.push_back(pl);
    }

    vector<int> sol = merge_sort(0, lamps.size());

    int my_max = max(sol[0], len - sol[n - 1]) * 2;
    for (int i = 0; i < n - 1; ++i) {
        my_max = std::max(sol[i + 1] - sol[i], my_max);
    }
    cout.precision(20);
    cout << fixed << my_max / 2.0 << endl;
}

vector<int> merge_sort(int l, int r)
{
    vector<int> tmp(&lamps[l], &lamps[r]);
    if (r - l == 0 || r - l == 1) {
        return tmp;
    }

    vector<int> left = merge_sort(l, ((r + l) / 2));
    vector<int> right = merge_sort((l + r) / 2, r);

    int i = 0;
    int a = 0, b = 0;
    while (a < left.size() && b < right.size()) {
        if (left[a] < right[b]) {
            tmp[i] = left[a++];
        } else if (left[a] > right[b]) {
            tmp[i] = right[b++];
        } else {
            tmp[i] = left[a++];
        }
        ++i;
    }

    while (a < left.size())
        tmp[i++] = left[a++];
    while (b < right.size())
        tmp[i++] = right[b++];
    return tmp;
}
