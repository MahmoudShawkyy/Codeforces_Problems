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
void solve()
{
    string s,str,s1,s2;
    cin>>s>>str;
    int i=0,pos=0;
   while(s[i]!='|')
   {
       s1+=s[i];
       pos++;
       i++;
   }
   for(int i=pos+1;i<len(s);i++)
       s2+=s[i];
   loop(len(str))
    if(len(s1)<len(s2))
        s1+=str[i];
    else
        s2+=str[i];
    if(len(s1)==len(s2))
        cout<<s1<<"|"<<s2<<endl;
    else
        cout<<"Impossible\n";

}
int main()
{
    cin.tie(0);
    cin.sync_with_stdio(0);
    int t=1;//cin>>t;
    while(t--)
        solve();
    return 0;
}
