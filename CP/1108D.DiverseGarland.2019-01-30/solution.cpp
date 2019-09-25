#include <bits/stdc++.h>
using namespace std;

int isEqual(int,char*);
char differentThan(char,char);

int 
main(){
    int n;
    cin>>n;
    char arr[n];
    int k=n;
    for(;n>0;--n){
        cin>>arr[k-n];
    }
    int counter =0;
    for(int i=0;i<k;i++){
        if(isEqual(i,arr) && i==0 && !isEqual(i+1,arr)){
            arr[i]=differentThan(arr[i],arr[i+2]);
            ++counter;
        }else if(isEqual(i,arr) && isEqual(i+1,arr)){
            arr[i+1]=differentThan(arr[i],arr[i+1]);
            ++counter;
        }else if(isEqual(i,arr)){
            arr[i]=differentThan(arr[i-1],arr[i]);
            ++counter;
        }    
    }   

        cout<<counter<<"\n";
    for(int i=0;i<k;i++){
        cout<<arr[i];
    }



}


int
isEqual(int index, char str[]){
    if(str[index]==str[index+1]) return true;
    return false;
}

char differentThan(char x,char y){
    char RGB[3]={'R','G','B'};
    for(int i=0;i<3;i++){
        if(RGB[i]!=x && RGB[i]!=y) return RGB[i];
    }
}   
