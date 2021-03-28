#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,sum=0,s=0;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
        sum+=arr[i];
    }
    int first=0,last=n-1;
    for(int i=0; i<n; i++)
    {
        if(arr[first]>=arr[last])
        {
            if(i%2==0)
                s+=arr[first];
            first++;
        }
        else
        {
            if(i%2==0)
                s+=arr[last];
            last--;
        }

    }
    cout<<s<<" "<<sum-s<<endl;
    return 0;
}
