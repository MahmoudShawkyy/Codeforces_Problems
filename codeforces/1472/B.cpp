#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
     int n,cnt1=0,cnt2=0;
     cin>>n;
     int arr[n];
     for(int i=0;i<n;i++)
        cin>>arr[i];
        for(int i=0;i<n;i++){
           if(arr[i]==1)
           cnt1++;
          else
            cnt2++;
            }



        if(cnt1%2!=0)
           cout<<"NO\n";
        else if(cnt1==0&&cnt2%2!=0)
            cout<<"NO\n";

        else
             cout<<"YES\n";
       }

    return 0;
}
