#include<bits/stdc++.h>
using namespace std;
int main(){
    int cnt=0,j=97;
string s;
cin>>s;
for(int i=0;i<s.length();i++){
    if(s[i]>j)
        if(s[i]-j<13)
          cnt+=s[i]-j;
        else
            cnt+=26-(s[i]-j);


    else
       if(j-s[i]<13)
       cnt+=j-s[i];
       else
        cnt+=26-(j-s[i]);
        j=s[i];}
        cout<<cnt<<endl;


    return 0;
}
