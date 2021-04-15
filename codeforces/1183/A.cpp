#include<bits/stdc++.h>
using namespace std;
int main()
{
   int sum=0,m,n,x;
    cin>>n;
    x=n;
    while(x>0){
        m=x%10;
        sum+=m;
        x/=10;
    }
        if(sum%4==0)
            cout<<n<<endl;
        else{
            while(sum%4!=0){
                sum=0;
                    n++;
                   x=n;
            while(x>0){
             m=x%10;
            sum+=m;
             x/=10;
       }
}
               cout<<n<<endl;}

    return 0;
}
