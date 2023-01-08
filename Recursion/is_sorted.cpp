#include<bits/stdc++.h>
using namespace std;
#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL)
typedef long long ll;
#define mod 1000000007

bool is_sorted(int arr[],int size)
{
    // Base case
    if(size==0 || size==1)
        return true;

    if(arr[0]>arr[1])
        return false; 
    // small problem
    bool isSmallSorted = is_sorted(arr+1,size-1);
    return isSmallSorted;
}


int main()
{
    fastIO;
    int arr[] = {1,2,3,7,9,11};
    if(is_sorted(arr,6))
        cout<<"sorted"<<endl;
    else
        cout<<"Not sorted"<<endl;
    return 0;
}