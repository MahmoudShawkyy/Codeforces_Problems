#include<bits/stdc++.h>
using namespace std;

int main()
{
int n,cnt=0,a,b;
cin>>n;
for(int i=0;i<n;i++){
        cin>>a>>b;
if(a<b&&b-a!=1)
    cnt++;
}
cout<<cnt<<endl;
}
