#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,a,q;
        cin>>n>>a>>q;
        string s;
        cin>>s;
        if(n==a){
            cout<<"YES"<<endl;
            continue;
        }
        bool f=1;
        int c=a;
        int p=0;
        for(int i=0;i<q;i++){
                if(s[i]=='+'){
                   p++;
                    c++;
                }
                else{
                    c--;
                }
                if(c==n){
                    f=0;
                    cout<<"YES"<<endl;
                    break;
                }

        }
        
         if((a+p)>=n&& f==1){
            cout<<"MAYBE"<<endl;
        }
        else if((a+p)< n && f==1){
            cout<<"NO"<<endl;
        }
    }
}