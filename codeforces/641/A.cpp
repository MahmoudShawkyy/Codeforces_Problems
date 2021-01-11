#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    string s;
    cin>>n>>s;
    int arr[n];
    for(int i=0; i<n; i++)
        cin>>arr[i];
    int i=0;
    for(int j=0; j<=n; j++)
    {
        if(s[i]=='>')
            i+=arr[i];
        else
            i-=arr[i];

        if(i>=n||i<0)
        {
            cout<<"FINITE\n";
            return 0;
        }


    }

    cout<<"INFINITE\n";


    return 0;
}


