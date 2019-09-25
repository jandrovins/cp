#include <bits/stdc++.h>

using namespace std;


int main(){
    int n, h;
    cin>>n>>h;
    int counter =n;
    int temp;
    for(int i=0;i<n;++i){
        cin>>temp;
        if(temp > h)
            counter++;
    }



    cout << counter;
}

