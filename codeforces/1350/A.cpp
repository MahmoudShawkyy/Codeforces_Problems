/*
   Instead of thinking outside the box, get rid of the box !
   created by : B  L  I  T  Z
*/
#include <bits/stdc++.h>
#define fast cin.tie(0);cin.sync_with_stdio(0);
#define ll long long
using namespace std;
bool isPrime(ll n)
{
    if (n <= 1)
        return false;
    if (n <= 3)
        return true;
    if (n % 2 == 0 || n % 3 == 0)
        return false;

    for (int i = 5; i * i <= n; i = i + 6)
        if (n % i == 0 || n % (i + 2) == 0)
            return false;

    return true;
}
void fofn(ll & n)
{
    int i;
    for(i=2;;i++)
    {
        if(n%i==0)
            break;
    }
    n+=i;
}
int main()
{
    /*
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    */
    fast
    int t;
    cin>>t;
    while(t--){
        ll n,k;
        cin>>n>>k;
        if(isPrime(n))
        {
            n+=n;
            k--;
        }
        else
        {
            fofn(n);
            k--;
        }
        while(k--)
            n+=2;
        cout<<n<<"\n";

    }
    return 0;
}
