#include <bits/stdc++.h>

using namespace std;

vector<int> sol;
vector<int> solution;
vector<int> v;
int n, k;

void encontrar(int ind,int producto)
{
    producto *= v[ind];
    if(producto == n){
       sol = solution;
       cout<<"eso";
    }
    else{
        solution.push_back(v[ind]);
        encontrar(ind+1,producto);
        solution.pop_back();
        encontrar(ind+1,producto);
        cout<<ind<<endl;
    }
}

int main()
{
    cin >> n >> k;
    //v.reserve(k);
    int inp;
    while (cin >> inp) {
        v.push_back(inp);
    }
    sort(v.begin(), v.end());
    cout<<"hola1\n";
    cout<<v[0];
    cout<<"hola1\n";
    encontrar(0,1);
}
