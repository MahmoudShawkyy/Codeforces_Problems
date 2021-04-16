#include<bits/stdc++.h>
using namespace std;
#define ll long long int
 
int main()
{
    ll tc;
    cin>>tc;
 
    while(tc--)
    {
        ll p,a,b,c,i,k;
        cin>>p>>a>>b>>c;
 
        if(p%a==0 || p%b==0 || p%c==0)
        cout<<"0"<<endl;
        else
        {
            k=min(a-p%a,b-p%b);
            cout<<min(k,c-p%c)<<endl;
        }
    }
}