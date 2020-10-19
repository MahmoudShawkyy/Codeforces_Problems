#include <bits/stdc++.h>
using namespace std ;
int main(){
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    vector <int> v;
    vector <int>:: iterator i;
    int m=1;
    while(n>0){
        if(n%10>0){
            v.push_back(n%10*m);
        }
        n/=10;
        m*=10;
    }
    cout<<v.size()<<endl;
  for (i=v.begin();i !=v.end();i++){
        cout<<*i<<" ";
        }
        cout<<endl;
}
return 0;
}