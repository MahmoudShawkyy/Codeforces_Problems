#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,b;
    cin>>n;
    bool rated=false,unrated=false;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>a>>b;
        if(a!=b)
        {
            rated=true;
            unrated=true;
        }
        arr[i]=a;
    }
    if(rated)
    {
        cout<<"rated";
    }
    else
    {
        for(int i=0; i<n-1; i++)
        {
            if(arr[i]<arr[i+1])
            {
                cout<<"unrated";
                unrated=true;
                break;
            }
        }
    }
    if(!unrated)
    {
        cout<<"maybe";
    }
    return 0;
}
