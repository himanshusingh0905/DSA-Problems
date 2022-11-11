#include<iostream>
using namespace std;

// Naive approch:
bool naivePrimeCheck(int n)
{
    for(int i = 2;i<n;i++)
    {
        if(n%i == 0)
        {
           return false;
        }
    }
    return true;
}
int main(){
    int n;cin>>n;
    if(naivePrimeCheck(n))
        cout<<n<<" is a prime number."<<endl;
    else
       cout<<n<<" is not a prime number."<<endl;
}

// 1.  Problem is this naive approch is having O(n) time complexity