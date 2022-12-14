#include<bits/stdc++.h>
using namespace std;
#define fast_io ios_base::sync_with_stdio(0);cin.tie(0)
#define loop(a, b) for (int i = a; i < b; i++)
typedef long long ll;

/*
    1.  If 'n' is divisible by k, Then 'n' is also divisible by (n/k)
            Example:    if 2 divides 16, then (16/2 = 8) also divides 16
        So the point is factors always comes in pair.

    2.  Now think, what should be the range for check*/
bool enhancedPrimeCheck(int n)
{
    // writing condition (i*i <= n) is better than writing
    // it like [ squrt(i)<= n ] due to precision issues.

    for(int i = 2;i*i<=n;i++)
    {
        if(n%i == 0)
        return false;
    }
    return true;
}
int main()
{
    fast_io;
    int n;cin>>n;
    if(enhancedPrimeCheck(n))
     cout<<n<<" is prime"<<endl;
    else
    cout<<n<<" is not a prime"<<endl;
}

// Here in this algorithm time complexity is better which is O(squrt(n))