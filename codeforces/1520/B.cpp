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
int solve()
{
ll n,num;
int j=1,sum=0,cnt=1;
cin>>n;
num=n;
while(num)
{
    num/=10;
    sum++;
}
if(sum==1)
{
    cout<<n<<endl;
    return 0;
}
cnt=(sum-1)*9;
while(--sum){
    num+=pow(10,sum)*1;
}
num++;
int temp=num;
do{
   num=temp*j;
   j++;
   cnt++;
}
while(num<=n);
cout<<--cnt<<endl;
}
    int main()
    {
        cin.tie(0);
        cin.sync_with_stdio(0);
        int t=1;
        cin>>t;
        while(t--)
            solve();
        return 0;
    }
