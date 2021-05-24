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

int solve(){
int n;
cin>>n;
if(n==1)
    cout<<"I hate it "<<endl;
else
{
    for(int i=1;i<n;i++)
    {
        if(i%2==0)
    cout<<" I love ";
      else
        cout<<"I hate ";
       cout<<"that ";
    }
    if(n%2==0)
    cout<<"I love ";
    else
       cout<<"I hate ";

 cout<<"it"<<endl;
}




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
