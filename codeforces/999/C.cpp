
#include <bits/stdc++.h>
#define fast cin.tie(0); cin.sync_with_stdio(0);
#define ll long long
#define lli long long int
#define ld long double
#define INF 1000000000000000000
using namespace std;
int n,i,j,k,t[500];
string s,q;
int main()
{
    fast
    cin >> n >> k >> s;
    q=s;
    sort(q.begin(),q.end());
    for(int i=0;i<k;i++)
        t[q[i]]++;
    for(int i=0;i<n;i++){
      if(t[s[i]])
        t[s[i]]--;
      else
        cout<<s[i];
    }
    return 0;
}
