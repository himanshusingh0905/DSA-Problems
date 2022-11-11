#include<bits/stdc++.h>
using namespace std;

int sum(int a[],int n){

    // base condition
    if(n==1) return a[0];

    // step 2: assume we already know sum of elements till size=(n-1)
    int smValue = sum(a+1,n-1);

    // step 3: calculate sum of n elements = nth + sum(n-1)
    return a[0] + smValue;
}
int main()
{
    int a[5] = {4,5,12,7,8};
    int ans = sum(a,5);
    cout<<ans<<endl;
}
