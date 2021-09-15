#include <bits/stdc++.h>
#include <queue>
using namespace std;
typedef vector<int> vi;
typedef long long ll;
typedef pair<int,int> PII;
#define pb push_back
#define len(s) (int)s.length()
#define sz(v)  (int)v.size()
#define all(v)  v.begin(),v.end()
#define array(arr)  arr,arr+n
#define endl '\n'
#define rep(k,n,x) for(int i=k;i<n;i+=x)
#define loop(n) for(int i=0;i<n;i++)
#define loop2(m) for(int j=0;j<m;j++)
void solve()
{
    string s;
    int a=0,b=0,c=0;
    loop(3)
    {
        cin>>s;
        if(s[1]=='<')
            if(s[2]=='A')
                a++;
            else if(s[2]=='B')
                b++;
            else
                c++;
        else

            if(s[0]=='A')
                a++;
            else if(s[0]=='B')
                b++;
            else
                c++;
    }
    if(a==b&&b==c)
        cout<<"Impossible\n";

   else if(a==0)
    {
        cout<<"A";
        if(b==1)
            cout<<"BC";
        else
            cout<<"CB";
    }
    else if(b==0)
    {
        cout<<"B";
        if(a==1)
            cout<<"AC";
        else
            cout<<"CA";
    }
    else
    {
        cout<<"C";
        if(a==1)
            cout<<"AB";
        else
            cout<<"BA";
    }
}
int main()
{
    cin.tie(0);
    cin.sync_with_stdio(0);
    int t=1;
    //cin>>t;
    while(t--)
        solve();

    return 0;
}
