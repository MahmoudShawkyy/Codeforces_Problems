#include <bits/stdc++.h>
using namespace std;

int main() {
int n,res=0;
cin>>n;
string s[n];
for(int i=0;i<n;i++)
    cin>>s[i];
for(int i=0;i<n;i++)
   for(int j=0;j<3;j++)
       if(s[i][j]=='+'){
        res++;
        break;
        }
       else if(s[i][j]=='-'){
        res--;
        break;}

       cout<<res<<endl;

    return 0;
}
