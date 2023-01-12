#include<bits/stdc++.h>
using namespace std;

void revArray(int arr[],int start,int end){
    // Step (I) : Base case
    if(start>=end)
        return;

    // step (II) : I can assume that remaining array is already reversed Now I'll have to just 
    // handle zeroth element
    revArray(arr,start+1,end-1);
    // Step (III)
    swap(arr[start],arr[end]);
}

int main()
{
    int ar[] = {1,2,3,4,5,6};
    revArray(ar,0,5);

    for(int i:ar)
        cout<<i<<" ";
    cout<<endl;

}   