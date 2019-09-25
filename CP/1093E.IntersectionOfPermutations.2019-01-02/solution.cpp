#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;int m;
    unsigned int la;unsigned int lb;
    unsigned int ra; unsigned int rb;
    int a[200000]; int b[200000];
    unsigned int tmp;
    cin>>n>>m;
    for(int i=0;i<n;++i){
        cin>>tmp;
        a[i] = tmp;
    }
    for(int i=0;i<n;++i){
        cin>>tmp;
        b[i] = tmp;
    }
        
    for(int i=0;i<m;++i){
        cin>>tmp;
        if(tmp==1){
            int counter;
            cin>>la>>ra>>lb>>rb;
            for(unsigned int p=la-1;p<ra;p++){
                if( find(b+lb-1, b+rb, a[p]) != b+rb) ++counter;
            }
            cout<<counter<<endl;
            counter=0;
        }else{
            int x;int y;int tmp2;
            cin>>x>>y;
            tmp2=b[x-1];
            b[x-1]=b[y-1];
            b[y-1]=tmp2;
    
        }
    }
}
