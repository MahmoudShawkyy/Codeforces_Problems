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
        int n,m,d,q;
        cin>>n>>m>>d;
        set<char>st;
        char grid[n][m];
        vector<pair<int,int>>v;
        loop(n)
        loop2(m)
        {
            char ch;
            cin>>ch;
            if(ch=='S')
            v.PB({i,j});
            else
                st.insert(ch);
            grid[i][j]=ch;

        }
        loop(n)
        loop2(m)
        {
            char ch=grid[i][j];
            if(ch!='S')
            {
                for(pair<int,int>shift : v){

                    double shy=shift.first , shx=shift.second;
                    double y=i,x=j;
                    double dis=sqrt(pow(x-shx,2)+pow(y-shy,2));
                    if(d>=dis)
                    {
                        st.insert(toupper(ch));
                        break;
                    }
                }
            }
        }
        string s;
        cin>>q>>s;
        int cnt=0;
        loop(len(s))
        if(st.find(s[i])==st.end()){
            if(isupper(s[i])&&!v.empty()&&st.find(tolower(s[i]))!=st.end())
                cnt++;
            else
            {
                cout<<-1<<endl;
                return 0;
            }
        }
        cout<<cnt<<endl;
    }
    return 0;
}
