#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
       long long w,h,n,cnt=1;
        cin>>w>>h>>n;
    while(w%2==0||h%2==0)
        {

            if(w%2==0)
            {
                cnt*=2;
                w/=2;
            }
            else if(h%2==0)
            {
                cnt*=2;
                h/=2;

            }

        }
        if(cnt>=n)
            cout<<"YES\n";
        else
            cout<<"NO\n";

    }
    return 0;
}
