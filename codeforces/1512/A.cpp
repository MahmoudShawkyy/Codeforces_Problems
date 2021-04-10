#include<bits/stdc++.h>
using namespace std;
int main(){

int t;
cin>>t;
while(t--){
    int n,num=0,ind=0;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
     cin>>arr[i];
 if(arr[0]==arr[2])
            num=arr[0];
    else
        for(int i=0;i<n-1;i++)
          if(arr[i]==arr[i+1])
            num=arr[i];

     for(int i=0;i<n;i++)
        if(arr[i]!=num){
             ind=i+1;
             break;
        }
        cout<<ind<<endl;
}

    return 0;
}
