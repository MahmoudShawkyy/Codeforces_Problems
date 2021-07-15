
#include<bits/stdc++.h>
using namespace std;
#define ll int long long
int main(){

  ll t;
  cin>>t;
  while(t--){
    ll n,k;
    cin>>n>>k;
    ll a[n];
   for (int i=0;i<n;i++){
      cin>>a[i];
    }
  ll arr[n]={};
   for(int i=1;i<n-1;i++){
     if(a[i]>a[i-1]&&a[i]>a[i+1])  arr[i]=1;
   }
   ll s=0;
   for(int i=0;i<n;i++){
     s+=arr[i];
     arr[i]=s;
   } 
  ll mx=-1,index=0;
   for(int i=0;i<=n-k;i++){
     ll s1=arr[i+k-2]-arr[i];
     if(s1>mx){
       mx=s1;
       index=i+1;
     }
   }
   cout<<mx+1<<" "<<index<<endl;
    
  }
  return 0;
} 