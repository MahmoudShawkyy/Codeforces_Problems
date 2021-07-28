#include <bits/stdc++.h>

using namespace std;
long long num=1e18;
int main()
{
  long long n;
  cin>>n;
  bool check=true;
  if(n%2==0)
  {
      cout<<n/2<<endl;
      return 0;
  }
  for(int i=3;pow(i,2)<=n;i+=2)
     if(n%i==0)
  {
      num=i;
      check=false;
      break;
  }
  if(check)
        cout<<1<<endl;
    else
    {
        n-=num;
        cout<<n/2+1<<endl;
    }





    return 0;
}
