#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    string s,str;
    cin>>s;
    int pos=n-1;
    for(int i=0;i<s.length()-1;i++)
        if(s[i]>s[i+1])
        {
           pos=i;
           break;
        }
     cout<<s.substr(0,pos)+s.substr(pos+1)<<endl;


    return 0;
}
