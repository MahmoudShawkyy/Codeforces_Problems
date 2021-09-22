#include <bits/stdc++.h>
#include <queue>
using namespace std;
typedef vector<int> vi;
typedef long long ll;
typedef pair<int,int> PII;
#define PB push_back
#define len(s) (int)s.length()
#define sz(v)  (int)v.size()
#define all(v)  v.begin(),v.end()
#define array(arr)  arr,arr+n
#define endl '\n'
#define rep(k,n,x) for(int i=k;i<n;i+=x)
#define loop(n) for(int i=0;i<n;i++)
#define loop2(m) for(int j=0;j<m;j++)
int fact(int n)
{
    int res=1;
    rep(2,n+1,1)
    res*=i;
    return res;
}
int nCr(int n,int r)
{
    return fact(n)/(fact(r)*fact(n-r));
}
int main()
{
    cin.tie(0);
    cin.sync_with_stdio(0);
    int t=1;
    //cin>>t;
    while(t--)
    {
        string s,str;
        cin>>s>>str;
        int positive=0,negative=0,marks=0,res;
        loop(len(s))
        if(s[i]=='+')
            positive++;
        else
            negative++;
        res=positive-negative;
        positive=0;negative=0;
        loop(len(str))
          if(str[i]=='+')
            positive++;
        else if(str[i]=='-')
            negative++;
        else
            marks++;
        vi v;
        for(int i=0,j=marks;i<=marks;i++,j--)
        {
            int mx=max(i,j);
                int n= nCr(marks,mx);
                positive+=i,negative+=j;
            loop(n)
            v.PB(positive-negative);
            positive-=i,negative-=j;
        }
        int cnt=0;
        loop(sz(v))
       {
           if(v[i]==res)
            cnt++;
       }
        double ans=(double)cnt/sz(v);
        cout<<setprecision(9)<<fixed<<ans<<endl;
    }
    return 0;
}
