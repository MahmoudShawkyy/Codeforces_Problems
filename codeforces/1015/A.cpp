#include <bits/stdc++.h>

using namespace std;

int main(){
int n,m,l=0,r=0;
cin>>n>>m;
vector<int>v;
for(int i=0;i<m;i++)
    v.push_back(0);
for(int i=0;i<n;i++){
        cin>>l>>r;
for(int j=l;j<=r;j++)
v[j-1]=1;
}
vector<int>res;
int result=0;
for(int i=0;i<v.size();i++){
        if(v[i]==0){
    res.push_back(i+1);
    result++;}
}
cout<<result<<endl;
for(int i=0;i<res.size();i++)
    cout<<res[i]<<" ";


return 0;
}
