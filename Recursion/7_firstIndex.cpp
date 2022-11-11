/*
Given an array of length N and an integer x, you need to find and
return the first index of integer x present in the array. 
Return -1 if it is not present in the array.First index means, 
the index of first occurrence of x in the input array.
Do this recursively. Indexing in the array starts from 0.
*/
#include<iostream>
using namespace std;

int firstIndex(int a[],int n,int x)  
{
    cout<<"n = "<<n<<endl;
    static int actual_size = n;
    if(n==0) return -1;
    // I'm assuming that small problem is, to check number in remaining elements.
    // Now my task is to check for first element, remaining we'll be done by recursion.
    if(a[0]==x)
    return actual_size-n;
    int index = firstIndex(a+1,n-1,x);
    return index;
}
int main()
{
    int a[5] = {4,5,12,7,5};

    int x;cin>>x;
    int ans = firstIndex(a,5,x);
    if(ans == -1)
    cout<<"Not found"<<endl;
    else
    cout<<ans<<endl;
}