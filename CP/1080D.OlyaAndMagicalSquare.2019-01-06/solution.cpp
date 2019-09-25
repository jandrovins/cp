#include <cmath>
#include <iostream>

using namespace std;

int Calc1(int n)
{
    if (n == 0)
        return 0;
    return 1 + 4 * Calc1(n - 1);
}

void Calc2(int n, int k)
{
    if (k <= 0) {
        cout << "YES " << n << endl;
        return;
    }
    if (n == 0) {
        cout << "NO" << endl;
        return;
    }
    Calc2(n - 1, k - 4);
}

long int Cuantas(int n){
    if (n == 0){
        return 0;
    }
    return pow(4,n) + Cuantas(n-1);
}

int main()
{
    int t;
    cin >> t;
    for (; t > 0; t--) {
        int n;
        long int k;
        cin >> n >> k;
        long int total = Cuantas(n-1);
        n-=1;
        k--;
        if ((k -= total) <= 0) {
            cout << "YES " << n << endl;
            continue;
        }
       // int cont = 1;
       // while(n>0){
       //     for(int i=0;i<)
       //     
       // }

       Calc2(n - 1, k - 3);
    }
    cout<<Cuantas(999);
} 
