#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,m,flag=0;
    cin>>n>>m;
    int arr[n][m];
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
            cin>>arr[i][j];
    }
    while(n%2==0)
    {
           n/=2;
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
                if(arr[i][j]!= arr[n*2-1-i][j])
                {
                    cout<<n*2<<endl;
                    return 0;
                }

            }

        }
    }
    cout<<n<<endl;


    return 0;
}


