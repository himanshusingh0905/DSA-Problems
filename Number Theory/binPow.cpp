#include<iostream>
using namespace std;
/*   Binary Exponention : caluculating powers in (log N)

      Two approches :  (1) Recursive Approach
                       (2) Iterative Approach

    Iterative approach is considered as better because in it function calls are avoided.
*/
int binPow_Recursive(int a,int b)
{
    /*
    Recursion : -> base 
                -> small problem
                -> caluculate big answer
    */
    if(b==0)
        return 1;
    
    int smallAns = binPow_Recursive(a,b/2);
    // 2^7  |   7 -> 3 -> 1 -> 0
    if(b%2 == 0)
        return smallAns*smallAns;
    else
        return a*smallAns*smallAns;
}

// Iterative approach
int binPow_Iterative(int a,int b)
{
    int res = 1;
    while(b!=0)// b = 1100
    {
        if(b&1)
            res = res*a;
        a = a*a;
        b = b>>1;
    }
    return res;
}
int main()
{
    int a,b;
    cin>>a>>b;
    int ans = binPow_Recursive(a,b);
    cout<<ans<<endl;
    cin>>a>>b;
    ans = binPow_Iterative(a,b);
    cout<<ans<<endl;

}
