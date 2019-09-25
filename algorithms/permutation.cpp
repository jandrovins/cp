#include <bits/stdc++.h>

using namespace std;

int n=3;
vector<int> permutation;
bool chosen[4];

void search() {
    if(permutation.size() == n) {
        for(int i=0;i<n;i++){
            cout<<permutation[i]<<"  ";
        }
        cout<<"\n";
// process permutation
    }else{
        for(int i = 1; i <= n; i++) {
            if(chosen[i]) continue;
            chosen[i] =true;
            permutation.push_back(i);
            search();
            chosen[i] =false;
            permutation.pop_back();
        }
     }
}

int main(){
    cout<<" Manualmente:"<<endl;
    search();
    cout<<" Con std:"<<endl;
    permutation={1,2,3};
    do{
        for(int i=0;i<n;i++){
            cout<<permutation[i]<<"  ";
        }
        cout<<"\n";
    }while(next_permutation(permutation.begin(),permutation.end()));
}
