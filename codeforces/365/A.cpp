#include<bits/stdc++.h>
using namespace std;
int main()
{
   string s ;
   int n  ,k ;
   cin >>n >>k ;
   int a=0,cnt=0;
   for(int i=0 ; i<n ; i++)
   {
       a=0;
       cin>>s ;
        int arr[10]={};
       for(int j=0 ; j<s.size() ;j++ )
       {
           arr[s[j]-'0']++;
       }
       for(int j=0;j<=k;j++)
        if(arr[j])
            a++;
       if(a>=k+1)
        cnt++;
   }
   cout<<cnt<<endl;

    return 0;
}
