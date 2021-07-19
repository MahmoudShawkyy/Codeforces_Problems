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
int freq[200005]={0};
void solve(){
  int n,k,q,l,r,cnt=0;
   vi v;
  cin>>n>>k>>q;
  while(n--)
  {
      cin>>l>>r;
         freq[l]++;
         freq[r+1]--;
  }

  for(int i=1;i<=200005;i++)
      freq[i]+=freq[i-1];
  for(int i=1;i<=200005;i++)
     if(freq[i]>=k)
       freq[i]=1;
       else
        freq[i]=0;
 for(int i=1;i<=200005;i++)
      freq[i]+=freq[i-1];

  while(q--){

    cin>>l>>r;
    cout<<freq[r]-freq[l-1]<<endl;
  }
}
int main()
{
 cin.tie(0);
 cin.sync_with_stdio(0);
/*int t;
cin>>t;
while(t--)*/

  solve();

}
