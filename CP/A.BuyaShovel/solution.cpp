#include <bits/stdc++.h>

using namespace std;

int main(){
    int k, r;
    cin >> k >> r;
    int residuo = k % 10;
    int un = residuo;
    int cont =1;
    while(un != 0 && un - r != 0 ){
        cont++;
        un = (un + residuo) % 10;
    }
    cout << cont;

}

