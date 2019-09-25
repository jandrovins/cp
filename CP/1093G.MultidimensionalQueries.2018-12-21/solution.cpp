#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;int k;
    cin>>n>>k;
    vector<vector<int>> matrix( n, vector<int>(k));

    for(int i=0;i<n;i++){
        vector<int> tmp;
        for(int j=0;j<k;j++){
            int tmp_k;cin>>tmp_k;
            tmp.push_back(tmp_k);
        }
        matrix[i]=tmp;
    }



    int number_queries; cin>>number_queries;

    for(int i=0;i<number_queries;i++){
        int type_querie;cin>>type_querie;
          //for(vector<int> vec:matrix){
          //    for(int pl:vec){
          //        cout<<pl<< " ";
          //    }
          //    cout<<"\n";
          //}

        if(type_querie==1){
          //cout<<"     UNO\n\n"<<endl;
            int index;cin>>index;
            for(int j=0;j<k;j++){
                int tmp_k2;
                cin>>tmp_k2;
                matrix.at(index-1).at(j)=tmp_k2;
            }
        }else{
          //cout<<"     DOS\n\n"<<endl;
            int l;cin>>l;l-=1;
            int r;cin>>r;r-=1;
            vector<vector<int>> l_set;
            vector<vector<int>> r_set;
            for(int i=0;i<n;i++){
                if(i>=l){
                    l_set.push_back(matrix[i]);
                }
                if(i<=r){
                    r_set.push_back(matrix[i]);
                }
            }
//            cout<<"     LSET\n";
//            for(vector<int> vec:l_set){
//                for(int pl:vec){
//                    cout<<pl<< " ";
//                }
//                cout<<"\n";
//            }
//            cout<<"     RSET\n";
//            for(vector<int> vec:r_set){
//                for(int pl:vec){
//                    cout<<pl<< " ";
//                }
//                cout<<"\n";
//            }
            
            int total=0;

            for(vector<int> l_vec:l_set){
               for(vector<int> r_vec:r_set){
                    int sum=0;
                    for(int p=0;p<k;p++){
                        int r_n=r_vec[p];
                        int l_n=l_vec[p];
                        if(r_n<l_n){
                            sum+=(l_n-r_n);
                        }else{
                            sum+=(r_n-l_n);
                        }
                    }
                          //  cout<<sum<<endl;
                            //cout<<total<<endl<<endl;
                    if(total<sum){
                        total=sum;
                    }
                    sum=0;
               }
            }
            cout<<"total: "<<total<<"\n\n\n";
            total=0;
        }
    }
}
