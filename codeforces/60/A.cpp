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
    int n,m,i=0,x;
    cin>>n>>m;
    string right ="right",left="left",s1,s2,s3,str;
    int j=n+1;
    bool check = false;
    while(m--)
    {
        cin>>s1>>s2>>str>>s3>>x;
        if(x>n||x<1)
            check=true;
      if(str==right)
       i=max(i,x);
       else
        j=min(j,x);
    }
    if(i>=j||check||j==i+1)
        cout<<-1<<endl;
    else
    cout<<(j-i-1)<<endl;

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
