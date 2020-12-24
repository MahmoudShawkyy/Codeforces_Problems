#include <bits/stdc++.h>

using namespace std;

int main() {
int n,a,j=0,counter=0;
cin>>n>>a;
int arr[n];
for(int i=0;i<n;i++)
    cin>>arr[i];
 for(int i=0;i<n;i++){
        if(arr[i]<=a)
            counter++;
        else if(arr[i]>a){
            j=i+1;
                break;}
        }
if(j>0&&j<n){
         for(int i=n-1;i>=j;i--){
        if(arr[i]<=a)
            counter++;
            else
            break;
    }}

        cout<<counter<<endl;


	return 0;

}
