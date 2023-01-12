#include<bits/stdc++.h>
using namespace std;

bool checkPalindrome(string s,int start,int end)
{
    // base condition
    if(start>=end)
        return true;

    // Lets assume remaining string is already checked
    bool check = checkPalindrome(s,start+1,end-1);
    // step 3: checking for first character only
    if(s[start] != s[end])
    return false;

   // returning the result:
    return check;
}
int main()
{
    string s;
    cin>>s;

    if(checkPalindrome(s,0,s.length()-1))
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;

}