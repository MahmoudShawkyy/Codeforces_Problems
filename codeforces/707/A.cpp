#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    bool flag= false;
    cin>>a>>b;
     char arr[a*b];
     for(int i=0;i<a*b;i++)
        cin>>arr[i];

     for(int i=0;i<a*b;i++)
     if(arr[i]=='C'||arr[i]=='M'||arr[i]== 'Y'){
         flag=true;
         break;
     }
          if(flag)
            cout<<"#Color\n";
            else
                cout<<"#Black&White\n";

    return 0;
}
