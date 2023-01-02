#include<bits/stdc++.h>
using namespace std;
#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL)
typedef long long ll;
#define mod 1000000007

const int N = 10000000;
bool sieve[N];
// Pre- computation
void createSieve()
{ 
    
    sieve[0] = sieve[1] = false;
    for(int i = 2;i<=N;i++)
    {
        sieve[i] = true;
    }
    /*
        for(int i = 2;i<=N;i++){
            if(sieve[i]==true){
                for(int j = 2*i;j<=N;j+=i)
                {
                    sieve[j] = false;
                }
            }
        }
    */
    // Little optimization:
    for(int i = 2; i*i<=N; i++){
        if(sieve[i]){
            for(int j = i*i; j<=N; j+=i)
            {
                sieve[j] = false;
            }
        }
    }



}

int main()
{
    createSieve();
    fastIO;
    // Sieve of eratosthenes : Pre-computation technique
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;

        if(sieve[n])
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;
    }

    return 0;
}