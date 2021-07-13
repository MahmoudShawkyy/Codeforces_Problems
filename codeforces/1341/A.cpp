
/*
   Albaraa Ahmed
   If you didn't succeed at first call it version 1.0
*/
#include <bits/stdc++.h>
#define fast cin.tie(0);cin.sync_with_stdio(0);
#define ll long long
using namespace std;
int main()
{
    fast
  int t;
  cin>>t;
  while(t--)
  {
     int n,a,b,c,d,mini1,mini2,maxi1,maxi2;
     cin>>n>>a>>b>>c>>d;
      mini1=(a-b)*n;
      maxi1=(a+b)*n;
      mini2=(c-d);
      maxi2=(c+d);

     if(mini1>maxi2||maxi1<mini2)
        cout<<"No\n";
     else
        cout<<"Yes\n";
  }

    return 0;
}

