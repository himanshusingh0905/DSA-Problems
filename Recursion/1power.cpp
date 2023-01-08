// Find  (a raised to power n ) using recursive approch:
// Recall :  1. First write base condition.
//           2. Think if small problem is already been solved. Hence 
//              answer of a^(n-1) you already have.
//           3. find solution of big problem i.e. a^(n).

#include<bits/stdc++.h>
using namespace std;

int power(int a, int n)
{
    if(n==0) 
       return 1;
    int smallValue = power(a,n-1);
    return a*smallValue;
}

int main()
{
    int a,n;
    cin>>a>>n;
    int ans = power(a,n);
    cout<<ans<<endl;
}