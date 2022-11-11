#include<iostream>
using namespace std;

//  fibonacci series = 0 1 1 2 3 5 8 13 21 34 ......
//                    0th , 1st , 2nd,  .....

//  f(n) = f(n-1) + f(n-2)
int fibo(int n)
{
    if(n==0) return 0;
    if(n==1) return 1;

    int sm1 = fibo(n-1);
    int sm2 = fibo(n-2);

    return sm1+sm2;
}

int main()
{
    int n;cin>>n;
    cout<<fibo(n)<<endl;
}