#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
     int n,p,it=0;
     bool f=false;
     cin>>n>>p;
     string safu[n],c="vika";
     for(int i=0;i<n;i++){
         cin>>safu[i];
     }
     for (int i=0;i<p;i++){
        for(int j=0;j<n;j++){
            if(safu[j][i]==c[it]){
                    f=true;
            }
        }
          if(f){
            it++;
            f=false;
               if(it==4){
             cout<<"YES"<<endl; 
              break; 
          }
          }
     }
    if(it!=4){
            cout<<"NO"<<endl;
    }
         
    }
    return 0;
}