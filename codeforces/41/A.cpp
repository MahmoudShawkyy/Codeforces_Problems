#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s1,s2;
    cin>>s1>>s2;
    bool flag=true;
    int l=s1.length();
    reverse(s1.begin(),s1.end());


    for(int i=0;i<s1.length();i++)
        if(s1[i]!=s2[i]){
            flag=false;
            break;
        }

        if(flag)
            cout<<"YES\n";
        else
            cout<<"NO\n";










return 0;
}
