#include <bits/stdc++.h>
#include <queue>
using namespace std;
typedef vector<int> vi;
typedef long long ll;
typedef pair<int,int> PII;
#define PB push_back
#define len(s) (int)s.length()
#define sz(v)  (int)v.size()
#define all(v)  v.begin(),v.end()
#define array(arr)  arr,arr+n
#define endl '\n'
#define rep(k,n,x) for(int i=k;i<n;i+=x)
#define loop(n) for(int i=0;i<n;i++)
#define loop2(m) for(int j=0;j<m;j++)
int main()
{
    cin.tie(0);
    cin.sync_with_stdio(0);
    int t=1;
    // cin>>t;
    while(t--)
    {
        int n,l,r,m;
        cin>>n;
        r=n-1,l=0;
        vi v;
        loop(n)
        {
            cin>>m;
            v.PB(m);
        }
        if(is_sorted(all(v)))
            cout<<"yes\n1 1";
        else
        {

            loop(n-1)
            if(v[i]<=v[i+1])
                l++;
            else
                break;
            for(int i=n-1; i>0; i--)
                if(v[i]>v[i-1])
                    r--;
                else
                    break;
                    reverse(v.begin()+l,v.begin()+r+1);
            if(is_sorted(all(v)))
            {
                cout<<"yes\n"<<++l<<" ";
                if(r==n)
                    cout<<r<<endl;
                else
                    cout<<++r<<endl;
            }

            else
                cout<<"no\n";
        }
    }
    return 0;
}
