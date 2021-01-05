#include <bits/stdc++.h>

using namespace std;

int main()
{
int n,counter=0;
cin>>n;
int arr[n];
for(int i=0;i<n;i++)
    cin>>arr[i];

sort(arr,arr+n,greater<int>());
for(int i=0;i<n-1;i++){
    if(arr[i]-arr[i+1]!=1)
        counter=counter+(arr[i]-arr[i+1]-1);
}
cout<<counter<<endl;


return 0;
}