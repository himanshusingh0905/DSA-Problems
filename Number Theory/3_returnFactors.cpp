#include <bits/stdc++.h>
using namespace std;


vector<int> returnFactors(int n)
{
    vector<int> v;
    for (int i = 1; i*i<=n;i++)
    {
        if(n%i==0)
        {
            v.push_back(i);
            if(i!= (n/i))
               v.push_back(n/i);
        }
    }
    return v;
}

int main()
{
    int n;cin>>n;
    vector<int>res = returnFactors(n);

    for(int i:res)
       cout<<i<<" ";
    cout<<endl;
}