#include<bits/stdc++.h>
using namespace std;

int main(){

    string s;
    cin>>s;
    string s1;
    transform(s.begin(),s.end(),s.begin(), ::tolower);
    int n = s.size();
    for(int i=0;i<n;i++)
    {
        if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='y')
        {
            continue;
        }
        else
        {
            s1+='.';
            s1+=s[i];
        }
    }
    cout << s1 << endl;
    return 0;
}