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
   int n,sum=0,total=0,num=0;
   cin>>n;
   int arr[n];
   bool check=true;
   loop(n)
   cin>>arr[i];
   sort(array(arr));
   if(n==1||(n==2&&arr[0]!=arr[1]))
    cout<<1<<endl;
   else if(n==2&&arr[0]==arr[1])
    cout<<2<<endl;
   else
   {

       loop(n)
       total+=arr[i];

       loop(n-1)
       {
           sum+=arr[i];
           num=total-sum;
          if(sum>=num)
          {
              check=false;
               cout<<n-i<<endl;
                 break;
          }

       }
        if(check)
         cout<<1<<endl;

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
