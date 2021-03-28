#include<bits/stdc++.h>
using namespace std;
int main()
{
    int upper=0,lower=0;
string s;
cin>>s;
for(int i=0;i<s.size();i++)
    if(s[i]>='A'&&s[i]<='Z')
    upper++;
    else
        lower++;
if(upper>lower)
    for(int i=0;i<s.size();i++)
    s[i]=toupper(s[i]);
    else
         for(int i=0;i<s.size();i++)
   s[i]=tolower(s[i]);
   for(int i=0;i<s.size();i++)
    cout<<s[i];
    cout<<endl;
    return 0;
}
