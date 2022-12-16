#include<bits/stdc++.h>
using namespace std;
#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL)
typedef long long ll;
#define mod 1000000007
// Miller Rabin
/*
       a^d = 1(mod n)
       (a^d)^2^r = -1(mod n)
                0 <= r <= s-1
*/
ll binPow(ll a,ll b,ll n)
{
    ll res = 1;
    a = a%n;
    while(b != 0)
    {
        if(b&1)
            res = res*a%n;

        a = a*a%n;
        b = b>>1;
    }
    return res;
}
bool checkComposite(ll a, ll d, ll s, ll n)
{
    ll x = binPow(a,d,n);
    if(x == 1 || x == n-1)
        return false;

    for(int r = 1; r <= s-1;r++)
    {
        x = x*x%n;
        if(x== -1)
            return false;
    }
    return true;
}
bool millerRabin(ll n)
{
    if(n<2)
        return false;
    // find d & s : d = odd, s = no. of 2s
    int s=0,d;
    d = n-1;
    while(!(d&1))
    {
        s++;
        d = d>>1;
    }

    for (int a : {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37}) 
    {
        if(n==a)
            return true;

        if(checkComposite(a,d,s,n))
            return false;
    }
    return true;

}

int main()
{
    fastIO;
    ll n;
    cin>>n;
    if(millerRabin(n))
        cout<<"Yes, it is prime"<<endl;
    else
        cout<<"No, it's not a prime"<<endl;
}
// Its time complexity = 2.log(n^2)