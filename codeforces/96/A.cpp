#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
typedef long long ll;
#define PB push_back
#define len(s) (int)s.length()
#define sz(v)  (int)v.size()
#define all(v)  v.begin(),v.end()
#define array(arr)  arr,arr+n
#define endl '\n'
#define loop(n) for(int i = 0; i < (n); i++)
#define loop2(n) for(int j = 0; j < (n); j++)

void solve()
{  string st;
    cin >> st;
    int count = 1, max = 1;
    if(st.length()<7) {
        cout << "NO";
    }
    else {
        for(int i=0; i<st.length()-1; i++) {
            if(st[i] == st[i+1]) {
                count++;
                max = (count > max)? count : max;
            }
            else
                count = 1;
        }
        if(max >= 7)
            cout << "YES";
        else
            cout << "NO";
    }
}

int main()
{
    cin.tie(0);
    cin.sync_with_stdio(0);
  /*  int t;
    cin>>t;
    while(t--)*/
     solve();

}
