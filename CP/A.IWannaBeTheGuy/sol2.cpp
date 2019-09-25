#include <iostream>

using namespace std;

int main(){
    int a;
	cin>>a;
	int temp = a;
	bool array [a];
    for(int i = 0; i < a; i++){
    	array[i]=false;
    }
    int b;
    cin >> b;
    for(int i = 0; i < b; i++){
    	cin>>b;
    	array[b-1] = true;
    }
    cout<<endl;
    cout<<endl;

    int c;
    cin >> c;
    for(int i = 0; i < c; i++){
    	cout<<c<<endl;
    	cin>>c;
    	array[c-1] = true;
    }

    for(int i = 0; i < temp; i++){
    	if(array[i]==false){
    		cout<<i<<endl;
    		cout<<"oh, my keyboard!"<<endl;
    		return 0;
    	}
    }
    cout<<"I become the guy"<<endl;

    return 0;
}
