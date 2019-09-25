#include <bits/stdc++.h>

using namespace std;

vector<int> subset;
int n =3;
int k=0;

void search(int);

int main() {
	search(k);

	return 0;
}

void search(int k){
	if(k==n+1) {
		cout<<"Conjunto: ";
		for(const int e: subset ){
			cout<<e;
		}
		cout<<endl<<endl;
		
	}else{
		subset.push_back(k);
		search(k+1);
		subset.pop_back();
		search(k+1);
	}
}
