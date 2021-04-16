#include<bits/stdc++.h>
using namespace std;
int main()
{
int n,m,cnt=1;
cin>>n>>m;
char arr[n][m];
for(int i=0;i<n;i++){
    if(cnt%2==1)
     for(int j=0;j<m;j++)
        arr[i][j]='#';
    else if(cnt%4==0){
        arr[i][0]='#';
        for(int j=1;j<m;j++)
            arr[i][j]='.';}
        else{
            arr[i][m-1]='#';
        for(int j=0;j<m-1;j++)
            arr[i][j]='.';

        }
cnt++;
    }
    for(int i=0;i<n;i++){
       for(int j=0;j<m;j++)
          cout<<arr[i][j];
          cout<<endl;
          }
return 0;
}
