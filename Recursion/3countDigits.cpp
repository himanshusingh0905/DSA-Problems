#include<bits/stdc++.h>
using namespace std;

int countDigits(int n)
{
    // base condition
    if(n==0) return 0;
    // step 2 : I'm assuming that I know no. of digis in n/10.
    //          Now I only add 1,to digits in n/10 to count digits in n.

    return 1 + countDigits(n/10);

}
int main()
{
    int n;cin>>n;
    int ans = countDigits(n);
    cout<<ans<<endl;
}