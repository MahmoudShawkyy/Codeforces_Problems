#include <iostream>
using namespace std;

int main() {
int n;
int police=0,crimes=0,cnt=0;
cin>>n;
int arr[n];
for(int i=0; i<n;i++)
   cin>>arr[i];
 for(int i=0; i<n;i++){
 if(arr[i]==-1)
 crimes+=arr[i];
 else
 police+=arr[i];
 if(police+crimes<0){
      cnt++;
      crimes=0;
}else{
police+=crimes;
crimes=0;}}
 cout<<cnt<<endl;

    return 0;
}