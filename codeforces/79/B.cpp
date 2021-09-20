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
        int n,m,k,t;
        cin>>n>>m>>k>>t;
        int a,b;
        vi v;
        loop(k)
        {
            cin>>a>>b;
            v.PB((a-1)*m+(b-1));
        }
        sort(all(v));
        loop(t)
        {
            cin>>a>>b;
            int pos=(a-1)*m+(b-1);
            auto it=find(all(v),pos);
            if(it!=v.end())
                cout<<"Waste\n";
            else
            {

                int temp=lower_bound(all(v),pos)-v.begin();
                pos-=temp;
                if(pos%3==0)
                    cout<<"Carrots\n";

                else if(pos%3==1)
                    cout<<"Kiwis\n";
                else

                    cout<<"Grapes\n";
            }


        }
    }
    return 0;
}
