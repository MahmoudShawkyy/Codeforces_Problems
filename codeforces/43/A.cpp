#include<bits/stdc++.h>
using namespace std;
int main(){
int n,cnt1=0,cnt2=0;
cin>>n;
string str[n];
for(int i=0;i<n;i++)
   cin>>str[i];
string s1,s2;
s1=str[0];
 for(int i=0;i<n;i++)
    if(s1==str[i])
      cnt1++;
     else
        {
            s2=str[i];
            cnt2++;
        }
if(cnt1<cnt2)
    cout<<s2<<endl;
   else
      cout<<s1<<endl;
   return 0;





}
