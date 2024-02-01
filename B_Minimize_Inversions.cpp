#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
       vector<long long> v;
        for(int i=0;i<n;i++){
            long long x;
            cin>>x;
            v.push_back(x);
        }
        map<long long,long long>mp;
        for(int i=0;i<n;i++){
            long long c;
            cin>>c;
            mp[v[i]]=c;
        }
         sort(v.begin(),v.end());

          for(int i=0;i<n;i++){
            cout<<v[i]<<" ";
          }
          cout<<endl;
         for(int i=0;i<n;i++){
             cout<<mp[v[i]]<<" ";
         }
         cout<<endl;
    }

    return 0;
}