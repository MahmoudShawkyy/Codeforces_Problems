#include <bits/stdc++.h>
using namespace std;
int main() {
    int n,b,d,x,sum=0,cnt=0;
    cin>>n>>b>>d;
    vector<int>v;
     for(int i=0;i<n;i++){
        cin>>x;
        if(x<=b)
            v.push_back(x);
     }
     for(int i=0;i<v.size();i++){
        sum+=v[i];
        if(sum>d){
            cnt++;
            sum=0;}
     }

            cout<<cnt<<endl;


return 0;
}
