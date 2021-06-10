#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
typedef long long ll;
#define PB push_back
#define len(s) (int)s.length()
#define sz(v)  (int)v.size()
#define all(v)  v.begin(),v.end()
#define array(arr)  arr,arr+n
#define endl '\n'
#define loop(n) for(int i = 0; i < (n); i++)
#define loop2(n) for(int j = 0; j < (n); j++)

void solve(){
int n,m,u,l,r;
ll sum=0;
cin>>n;
int arr[n],sortedarr[n];
ll presum[n+1]={0},presumsort[n+1]={0};
loop(n)
{
  cin>>arr[i];
  sortedarr[i]=arr[i];
}
sort(sortedarr,sortedarr+ n);
for(int i=1;i<=n;i++)
{
     presum[i]=presum[i-1]+arr[i-1];
      presumsort[i]=presumsort[i-1]+sortedarr[i-1];
}
cin>>m;
loop(m){
    cin>>u>>l>>r;
    if(u==1)
        cout<<presum[r]-presum[l-1]<<endl;
    else
      cout<<presumsort[r]-presumsort[l-1]<<endl;
}}
int main()
{
 cin.tie(0);
 cin.sync_with_stdio(0);
/*int t;
cin>>t;
while(t--)*/
  solve();

}