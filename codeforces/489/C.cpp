#include <bits/stdc++.h>
#include <queue>
using namespace std;
typedef vector<int> vi;
typedef long long ll;
#define pb push_back
#define len(s) (int)s.length()
#define sz(v)  (int)v.size()
#define all(v)  v.begin(),v.end()
#define array(arr)  arr,arr+n
#define endl '\n'
#define rep(k,n,x) for(int i=k;i<n;i+=x)
#define loop(n) for(int i=0;i<n;i++)
int solve()
{
 int n,s;
 cin>>n>>s;
 string arr[2];
 if((n==1&&s>9)||(s==0&&n>1))
 {
     cout<<"-1 -1 "<<endl;
     return 0;
 }
 if(n==1&&s<10)
 {
     cout<<s<<" "<<s<<endl;
     return 0;
 }
 string mx;
 int sub=s;
 loop(n)
 {
     if(sub>=9)
     {
         mx+='9';
         sub-=9;
     }else
     {
         mx+=(sub+'0');
         sub=0;
     }
 }
 if(sub)
    {
     cout<<"-1 -1 "<<endl;
     return 0;
   }
 arr[0]=mx;
 reverse(all(mx));
 if(mx[0]-'0'==0)
 {
     mx[0]='1';
     rep(1,n,1)
      {
          if(mx[i]!='0')
          {
              mx[i]--;
              break;
          }
      }
 }
 arr[1]=mx;
 cout<<arr[1]<<" "<<arr[0];
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
