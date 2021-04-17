#include<bits/stdc++.h>
using namespace std;
int main()
{ int k,n,w,sum=0,res=0;
cin>>k>>n>>w;
for(int i=1;i<=w;i++)
    sum+=k*i;
res=sum-n;
if(res>=0)
    cout<<res<<endl;
else
    cout<<0<<endl;
return 0;
}
