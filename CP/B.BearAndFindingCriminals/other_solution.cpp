#include <vector>
#include <stdio.h>

using namespace std;

int a, n;
int t[105];

int main(){
    scanf("%d%d", &n, &a);

    for(int i = 1; i <= n; ++i){
        scanf("%d", &t[i]);
    }

    int sol = 0;
    for(int j = 1; j <= n; ++j) if(t[j]){
        int k = a - j;
        if( a + k < 1 || a + k > n || t[a + k])
            ++sol;
    }
    printf("%d\n", sol);
}

