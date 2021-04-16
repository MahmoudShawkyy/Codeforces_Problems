#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n ;
    cin>>n;
    string s;
    cin>>s ;
    int ones=0,zeros=0 ;
    for (int i=0 ; i<s.length(); i++)
    {
        if(s[i]=='0')
        {
            zeros++ ;
        }
        else
        {
            ones++ ;
        }


    }

    cout<<abs(ones-zeros)<<endl;

}
