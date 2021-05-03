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
int main()
{
 cin.tie(0);
 cin.sync_with_stdio(0);
string s;
cin>>s;
int q=0;
for(int i=0;i<len(s);i++)
    for(int j=i+1;j<len(s);j++)
      for(int k=j+1;k<len(s);k++)
      if(s[i]=='Q'&&s[j]=='A'&&s[k]=='Q')
         q++;
cout<<q<<endl;

    return 0;
}
