#include <bits/stdc++.h>
using namespace std;

int main() {
int n,i,j=0,cnt1=0,res=0;
cin>>n;
string s;
cin>>s;
vector<int>v;
for( i=0;i<n;i++,j++)
   if(s[i]=='B'){
       while(s[j]=='B'){
        cnt1++;
        j++;
      }
      res++;
      v.push_back(cnt1);
      cnt1=0;
      i=j;}
   
   cout<<res<<endl;
   for(i=0;i<v.size();i++)
    cout<<v[i]<<' ';
    return 0;
}