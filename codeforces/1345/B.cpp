#include <bits/stdc++.h>
using namespace std;
long long p[100005];
int main()

{

    p[1]=2;
    for(int i=2; i<=100000; i++)
        p[i]=p[i-1]+(i-1)+(i*2);

    int t;
    cin>>t;
    while(t--)
    {
        long long n;
        int cnt=0,c;
        cin>>n;

        for(int i=1; i<=100000; i++)
            if(p[i]>=n)
            {
                c=i;
                break;
            }
        while(n>1)
        {
            for(; c>=1; c--)
                if(p[c]<=n)
                {
                    n-=p[c];
                    cnt++;
                    break;
                }
        }
        cout<<cnt<<endl;
    }
    return 0;
}
