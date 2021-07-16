#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,sum=0,k,cnt=0,m=1;
        cin>>n>>k;
        int arr[n];
        set<int>st;
        set<int, greater<int> >::iterator itr;
        bool check=true;
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
            st.insert(arr[i]);
        }
        if(st.size()<=k)
        {

            cout<<n*k<<endl;
            for(int i=0; i<n; i++)
            {
                for (itr = st.begin(); itr != st.end(); itr++)
                {
                    cout << *itr<<" ";
                }
                for (int j=0; j<k-st.size(); j++)
                    cout<<1<<' ';

        }
        cout<<endl;
    }
    else
        cout<<-1<<endl;

}



return 0;
}
