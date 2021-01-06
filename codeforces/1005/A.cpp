#include <bits/stdc++.h>

using namespace std;

int main()
{
int n,counter=0;
cin>>n;
int arr[n];
for(int i=0;i<n;i++)
    cin>>arr[i];
for(int i=0;i<n;i++){
    if(arr[i]==1)
        counter++;
        }
cout<<counter<<endl;
for(int i=1;i<n;i++){
    if(arr[i]==1)
        cout<<arr[i-1]<<" ";
    }
cout<<arr[n-1]<<endl;
return 0;
}
