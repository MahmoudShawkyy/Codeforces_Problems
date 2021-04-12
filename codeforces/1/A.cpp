#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n,m,a,k=0,l=0;
    cin>>n>>m>>a;
    if(n%a==0)
        k=n/a;
    else
      k=n/a+1;
    if(m%a==0)
        l=m/a;
    else
      l=m/a+1;
    cout<<k*l<<endl;

   return 0;
}
