#include <bits/stdc++.h>
#include<string>
#include<algorithm>
typedef long long ll ;
typedef unsigned long long ull ;
#define MOD 1000000009
#define fast  cin.tie(0);cin.sync_with_stdio(0);
#define loop(i,n) for(int i=0 ;i<n ;i++)

using namespace std;
int main()
{
    fast
    int t;
    cin>>t;
    while(t--)
        {
            int n;
            cin>>n;
            ll a=0,b=0;
            a=pow(2,n);
            for(int i=1;i<=(n/2)-1;i++)
                a+=pow(2,i);
            for(int i=n/2;i<n;i++)
                b+=pow(2,i);
            cout<<abs(a-b)<<"\n";
        }

    return 0;
}
