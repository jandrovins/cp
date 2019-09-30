#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int a[100010];
int n, m;

int binary_search(int value)
{
    int left = 0;
    int right = n - 1;
    int mid = (left + right) / 2;
    while (left <= right) {
        if (a[mid] == value)
            return mid;

        if (a[mid] > value) {
            right = mid - 1;
        } else {
            left = mid + 1;
        }
        mid = (left + right) / 2;
    }
    return -1;
}

int main()
{
    scanf("%d", &n);
    for (int i = 0; i < n; ++i) {
        scanf("%d", &a[i]);
    }
    sort(a, a + n);
    binary_search();


    scanf("%d", &m);
    int query;
    for(int i = 0; i < m; ++i){
        scanf("%d", &query);
        query = binary_search(query);
    }

}
