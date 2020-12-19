#include <bits/stdc++.h>

using namespace std;

int main() {
int t;
cin>>t;
while(t--){
    int n,x;
    vector<int>v;
cin>>n;
for(int i=0;i<n;i++){
   cin>>x;
   v.push_back(x);}
   sort(v.begin(),v.end());
   while(v.size()!=1){
    if(v[1]-v[0]<=1){
        v.erase(v.begin());}
        else if (v[1]-v[0]>1)
            break;
   }
   if(v.size()==1)
    cout<<"YES"<<endl;
   else
    cout<<"NO"<<endl;}
	return 0;

}
