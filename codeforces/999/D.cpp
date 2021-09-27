
#include <bits/stdc++.h>
#define fast cin.tie(0); cin.sync_with_stdio(0);
#define ll long long
#define lli long long int
#define ld long double
#define INF 1000000000000000000
using namespace std;
int main()
{
      fast
      int n,m;
      cin >> n >> m;
      int a[n];
      vector<vector<int>>c(m); // modulus of m (1...m-1)
      vector<pair<int,int>>v; // store extra elements with their indices
      int k=n/m; // max size of each group
      for (int i=0;i<n;i++) {
        cin >> a[i];
        c[a[i]%m].emplace_back(i); // store index for every element of mod Cr
      }
      ll moves = 0;
      for (int i=0;i<2*m-1;i++){
        int curr=i%m;
        while((int)c[curr].size() > k){
          v.emplace_back(c[curr].back(), i); // the pair is the index of element to be increased,current mod
          c[curr].pop_back();
        }
        while((int)c[curr].size() < k && !v.empty()) {
          c[curr].emplace_back(v.back().first);
          int x = i - v.back().second;
          moves += x;
          a[v.back().first]+=x;
          v.pop_back();
        }
      }
      cout << moves << "\n";
      for (auto i : a){
        cout << i << " ";
      }
    return 0;
}
