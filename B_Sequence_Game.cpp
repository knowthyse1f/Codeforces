#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
     int n;
     cin>>n;
     int arr[n];
     vector<int> safu;
     for(int i=0;i<n;i++){
         cin>>arr[i];
         if( i &&safu.back()> arr[i]){
            safu.push_back(1);
         }
         safu.push_back(arr[i]);
     }
     cout<<safu.size()<<endl;
     for(int i=0;i<safu.size();i++){
         cout<<safu[i]<<" ";
     }
     cout<<endl;
    }
    return 0;
}