#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,s;
    cin>>n>>s;
    int arr[10000];
  vector<int>v;
for(int i=1;i<=n;i++){
    int x;
    cin>>x;
    arr[x]++;
    if(arr[x]==1)
    v.push_back(i);
}
    if(s>v.size())
    cout<<"NO\n";
    else{
            cout<<"YES\n";
            for(int i=0;i<s;i++)
          cout<<v[i]<<" ";
    }

return 0;
}
