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
int r1,r2,c1,c2,d1,d2;
int n1,n2,n3,n4;
bool check=false;
cin>>r1>>r2>>c1>>c2>>d1>>d2;
for(int i=1;i<=9;i++)
{
    n1=i;
    n2=r1-n1;
    n3=c1-n1;
    n4=d1-n1;
if(n1<10&&n1>0&&n2<10&&n2>0&&n3<10&&n3>0&&n4<10&&n4>0)
   if(n2+n4==c2&&n2+n3==d2&&n3+n4==r2&&n1!=n2&&n1!=n3&&n1!=n4&&n2!=n3&&n2!=n4&&n3!=n4)
   {
       check=true;
       break;
   }
}
if(check){
cout<<n1<<" "<<n2<<endl;
cout<<n3<<" "<<n4<<endl;
}
else
    cout<<-1<<endl;}
int main()
{
 cin.tie(0);
 cin.sync_with_stdio(0);
/*int t;
cin>>t;
while(t--)*/
  solve();

}