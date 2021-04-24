#include <bits/stdc++.h>
using namespace std;
int main() {
int n;
cin>>n;
int arr[n];
int cnt=1,maxi=1;
for(int i=0;i<n;i++)
    cin>>arr[i];
sort(arr,arr+n);
for(int i=1;i<n;i++)
    if(arr[i]==arr[i-1])
        cnt++;
     else{
        if(cnt>maxi)
           maxi=cnt;
        cnt=1;}
      if(cnt>maxi)
           maxi=cnt;
   cout<<maxi<<endl;

return 0;
}
