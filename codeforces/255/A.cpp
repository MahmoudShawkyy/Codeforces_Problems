#include<bits/stdc++.h>
using namespace std;
int main()
{
int n,sum1=0,sum2=0,sum3=0;
cin>>n;
int arr[n];
for(int i=0;i<n;i++)
    cin>>arr[i];
for(int i=0;i<n;i+=3)
       sum1+=arr[i];
for(int i=1;i<n;i+=3)
    sum2+=arr[i];
for(int i=2;i<n;i+=3)
    sum3+=arr[i];
int k=max(sum1,sum2);
int ans=max(k,sum3);

if(ans==sum1)
    cout<<"chest\n";
else if (ans==sum2)
    cout<<"biceps\n";
else
    cout<<"back\n";




return 0;
}
