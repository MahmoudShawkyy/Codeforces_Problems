#include<bits/stdc++.h>
using namespace std;
int main(){
    int cnt=0;
int arr[4];
for(int i=0;i<4;i++)
    cin>>arr[i];
 
string num;
cin>>num;
 
    for(int j=0;j<num.length();j++)
      if(num[j]=='1')
         cnt+=arr[0];
       else if(num[j]=='2')
         cnt+=arr[1];
           else if (num[j]=='3')
         cnt+=arr[2];
          else if  (num[j]=='4')
         cnt+=arr[3];
 
 
cout<<cnt<<endl;
 
    return 0;
}