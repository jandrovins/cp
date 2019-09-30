#include <iostream>
#include <vector>

using namespace std;

int main(){
    vector<int> crims;
    crims.reserve(110);

    int n, a;
    cin >> n >>a;
    for(int i = 0; i < n; ++i){
        int tmp; 
        cin >> tmp;
        crims.push_back(tmp);
    }

    --a;
    int diff = 1;
    int sol = 0;
    if(crims[a]) ++sol;
    while(a - diff >= 0 and a + diff < n){
        if(crims[a - diff] && crims[a + diff]) sol += 2;
        ++diff;
    }
    if(a - diff < 0 ){
        while( a + diff < n){
            if(crims[a + diff]) ++sol;
            ++diff;

        }
    }else{
        while(a - diff >= 0){
            if(crims[a - diff]) ++sol;
            ++diff;
        }
    }
    cout << sol << "\n";
}

