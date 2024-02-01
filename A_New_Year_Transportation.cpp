#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,t;
    cin>>n>>t;
    int a[n];
    for(int i=0;i<n-1;i++){
        cin>>a[i];
    }
    int c=1;
    while(c<n){
        c+=a[c-1];
        if(c==t){
            cout<<"YES"<<endl;
            return 0;
        }
    }
    cout<<"NO"<<endl;
}