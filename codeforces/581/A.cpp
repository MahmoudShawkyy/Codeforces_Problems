#include<bits/stdc++.h>
using namespace std;

int main()
{
int r,b,cnt1=0,cnt2=0,res1=0,res2=0;
cin>>r>>b;
int k=max(r,b);
res1=min(r,b);
res2=ceil((k-res1)/2);
cout<<res1<<" "<<res2<<endl;
return 0;
}
