#include <bits/stdc++.h>
using namespace std;
long long n,k,sum=0,pos=0,ans=0;
map<long long,long long>mp;
int main(){

 cin>>n;
 mp[0]=1;
 for(long long i=1;i<=n;i++){
    cin>>k;
    sum+=k;
    pos=max(pos,mp[sum]);
    ans+=i-pos;
    mp[sum]=i+1;

 }
 cout<<ans<<endl;
    return 0;
}
