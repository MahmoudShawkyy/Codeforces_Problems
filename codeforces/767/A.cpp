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
    int n,m,cnt;
    cin>>n;
    cnt=n;
    int maxi=pow(10,5);
    bool check[maxi]={false};
    bool flag=false;

    loop(n)
     {
         cin>>m;
         if(cnt==m)
         {
             cout<<m<<" ";
             cnt--;
             while(1)
                if(check[cnt])
                {
                    cout<<cnt<<" ";
                    cnt--;
                }
                else {

                    break;
                }

             cout<<endl;

          }
          else
          {
               cout<<endl;
               check[m]=true;


          }


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
