#include <bits/stdc++.h>

using namespace std;

int main()
{
int n,sum1=0,sum2=0;
cin>>n;
int arr[n];
for(int i=0;i<n;i++)
    cin>>arr[i];
for(int i=0;i<n;i++){
    if(arr[i]>=0)
        sum1+=arr[i];
    else
        sum2+=arr[i];}

        cout<<sum1-sum2<<endl;




return 0;
}