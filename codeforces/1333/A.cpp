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
    /*
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    */
    fast
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(i==0&&j==0)
                    cout<<"W";
                else
                    cout<<"B";
            }
            cout<<"\n";
        }
    }
    return 0;
}
