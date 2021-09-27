
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
    int n ;
    cin >> n;
    string x;
    cin >> x;
    for(int i=2;i<=n;i++){
        if(n%i==0){
            reverse(x.begin(),x.begin()+i);
        }
    }
    cout << x;
    return 0;
}
