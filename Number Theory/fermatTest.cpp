#include<bits/stdc++.h>
using namespace std;
#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL)
typedef long long ll;
#define mod 1000000007
// Fermat test used for primality test

ll binPow(ll a,ll b,ll n)
{
	a = a%n;
	// Binary exponentiation using iterative approch
	ll res = 1;
	while(b != 0)// b = 1100
	{
		if(b&1)
			res = res * a % n;
		
		a = a*a%n;
		b = b>>1;

	}
	return res;
}

bool FermatTest(ll n)
{
	if(n<4)
		return n==2 || n==3;
	//  a^(p-1) = 1(mod p)
	for(int i = 0;i<5;i++)
	{
		//  2 <= a <= n-2
		int a = 2 + rand()%(n-3);
		if(binPow(a,n-1,n) != 1)
			return false;
	}
	return true;
}
int main()
{
	ll n;
	cin>>n;

	if(FermatTest(n))
		cout<<"Yes, it's prime"<<endl;
	else
		cout<<"NO, it's not a prime"<<endl;
}