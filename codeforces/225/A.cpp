#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,n,k;
    cin>>t>>n;
    k = 7-n;
    while(t--){
        int a,b;
        cin>>a>>b;
        if(a==n || a==k || b==n || b==k){
            cout<<"NO";
            return 0;
        }
    }
    cout<<"YES";
    return 0;
}
