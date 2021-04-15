#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k,x;
        bool flag=true;
        cin>>n>>k;
        int arr[n];
        for(int i=0; i<n; i++)
            cin>>arr[i];
        sort(arr,arr+n);

        int b=arr[0]+k;
        for(int i=0; i<n; i++)
        {
            x=b-arr[i];
            if(abs(x)>k)
            {
                flag=false;
                break;
            }

        }
        if(flag)
            cout<<b<<endl;
        else
            cout<<-1<<endl;

    }
    return 0;
}
