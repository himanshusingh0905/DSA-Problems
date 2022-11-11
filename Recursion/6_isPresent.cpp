/*
Given an array of length N and an integer x, 
you need to find if x is present in the array or not. Return true or false.
*/

#include<iostream>
using namespace std;

bool isPresent(int a[],int x,int n)
{
    if(n==0) return false;
    // Now I'm assuming that I've traversed the array till (size-1) but
    // element is not found. now I've to compare nth element.
    bool isfound = isPresent(a+1,x,n-1);
    if(a[0]== x) return true;

    return isfound;
}
int main()
{
    int a[5] = {4,5,12,7,8};
    int x;cin>>x;
    if(isPresent(a,x,5))
        cout<<"Yes"<<endl;
    else
        cout<<"No"<<endl;

}