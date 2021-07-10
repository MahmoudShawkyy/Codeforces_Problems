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
        int n;
        cin>>n;
        int cnt1=0,cnt2=0;
        bool check = true;
        int a[n],b[n];
        for(int i=0; i<n; i++)
            cin>>a[i];
        for(int i=0; i<n; i++)
            cin>>b[i];
        for(int i=0; i<n; i++)
        {

            if(a[i]>b[i]&&!cnt2)
            {
                check=false;
                break;
            }
            else if(a[i]<b[i]&&!cnt1)
            {
                check=false;
                break;
            }
            else
            {
                if(a[i]==1)
                    cnt1++;
                else if(a[i]==-1)
                    cnt2++;
            }

        }
        cout<<(check?"YES":"NO")<<endl;
    }
    return 0;
}
