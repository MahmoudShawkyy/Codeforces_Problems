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
void solve()
{
    int n,cnt=0;
    cin>>n;
    string s,str;
    cin>>s;
    str=s;
    sort(s.begin(),s.end());
    for(int i=0;i<len(s);i++)
        if(str[i]!=s[i])
           cnt++;
     cout<<cnt<<endl;
}
int main()
{
    cin.tie(0);
    cin.sync_with_stdio(0);
    int t;
    cin>>t;
    while(t--)
        solve();

}
