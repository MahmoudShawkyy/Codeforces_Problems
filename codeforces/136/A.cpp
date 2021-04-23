#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,k=0,j=1;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];  
     }
    while(n)
    if(arr[k]==j){
     cout<<k+1<<" ";
      n--;
      j++;
      k=0;
    }else 
    k++;
  
         
    return 0;
}