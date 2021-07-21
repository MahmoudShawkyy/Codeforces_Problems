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
//int freq[200005]={0};
void solve(){
int n,k,m,cnt=0,friends=0;
cin>>n>>m>>k;
int arr[m+1];
string bin[m],temp;


loop(m+1)
cin>>arr[i];
for(int i=0;i<m;i++)
 bin[i]=bitset<32>(arr[i]^arr[m]).to_string();
for(int i=0;i<m;i++)
{
    temp=bin[i];
    for(int j=0;j<temp.length();j++)
     if(temp[j]-48==1)
          cnt++;
    if(cnt<=k)
        friends++;
    cnt=0;


}

cout<<friends<<endl;

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
