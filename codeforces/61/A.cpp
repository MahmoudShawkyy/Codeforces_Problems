#include<bits/stdc++.h>
using namespace std;
int main()
{ string s1,s2,s;
cin>>s1>>s2;
for(int i=0; i<s1.length();i++)
    if(s1[i]!=s2[i])
      s2[i]='1';
    else
      s2[i]='0';
    cout<<s2<<endl;
return 0;
}
