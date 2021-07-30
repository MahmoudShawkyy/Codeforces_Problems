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
//int freq[20,0005]={0};
void solve()
{
  int n,m;
  cin>>n>>m;
  int arr[m+1]={0};
  n--;
  int a,b;
  cin>>a>>b;
  arr[a]+=1;
  arr[b]+=1;
  for(int i=a;i<=b;i++)
    {
      if(i==0)
        arr[i]=1;
      else
        arr[i]+=arr[i-1];
  }
  while(n--){

    cin>>a>>b;
    if(arr[a])
    {
        arr[a]+=1;
        arr[b]+=1;
  for(int i=a;i<=b;i++)
  {
      if(i==0)
        arr[i]=1;
      else
        arr[i]+=arr[i-1];
  }

    }
  }
  if(arr[m]&&arr[0])
    cout<<"YES\n";
  else
    cout<<"NO\n";
}
int main()
{
    cin.tie(0);
    cin.sync_with_stdio(0);
    int t=1;//cin>>t;
    while(t--)
        solve();

}
