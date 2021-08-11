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
void solve()
{
int a,b,c,sum;
cin>>a>>b>>c;
int arr[6];
arr[0]=a*b*c;
arr[1]=a*b+c;
arr[2]=a+b*c;
arr[3]=(a+b)*c;
arr[4]=a*(b+c);
arr[5]=a+b+c;
int *maxi=max_element(arr,arr+6);
cout<<int(*maxi)<<endl;

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
