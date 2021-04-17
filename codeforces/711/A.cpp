#include <bits/stdc++.h>
using namespace std;

int main() {

int n;
cin>>n;
bool flag=false, check=true;
string s[n];
string str;
for(int i=0;i<n;i++){
cin>>str;
   for(int j=0;j<5;j++){
      if(str[j]=='O'&&str[j+1]=='O'&&check){
           flag=true;
           str[j]='+';    
           str[j+1]='+';
           check=false;
      }    
   }
  s[i]=str;
  }
  
  if(flag){
  cout<<"YES"<<endl;
   for(int i=0;i<n;i++)
    cout<<s[i]<<endl;
    }else 
    cout<<"NO"<<endl;
        
    return 0;
}