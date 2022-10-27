
/*
     Author's Handle : Crazy_Dreamer
     Author's Name   : S M Nahid Hasan                
*/

#include<bits/stdc++.h>
using namespace std;

#define ll               long long
#define dl               double
#define forn(i,a,n)      for (ll i=a;i<n;i++)
#define per(i,a,n)       for (ll i=n-1;i>=a;i--)
#define pb               push_back
#define mp               make_pair
#define all(x)           (x).begin(),(x).end()
#define fi               first
#define se               second
#define bug              cout<<"bug --  "<<bug1++<<el;
#define SZ(x)            ((ll)(x).size())
#define el               endl
#define pi               acos(-1.0)
#define fio              ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define tst              cin>>t; while(t--)
#define sz               60



typedef    pair<ll,ll>pll;
typedef    pair<ll,pll>pl;
typedef    unordered_map<ll,ll>mll;
typedef    vector<ll>vl;
typedef    vector<pll>vll;
typedef    vector<pl>vlp;
typedef    set<ll>sl;
typedef    multiset<ll>msl;
typedef    priority_queue<ll>prl;

const ll mod=1000000007;


//  SIEVE OF ERATOSTHENES
bitset<sz>bs;
vl prime;
void sieve()
{
    for(ll i=2; i<=sz; i++)
    {
        if(bs[i]==0)
        {
            for(ll j = i*i; j<=sz; j+=i)				bs[j]=1;
            prime.pb(i);
        }
    }
}




int main()
{

    fio

    ll t,i,j,n,m,k,a,b,c=0,tc=1,bug1=1;
    
    sieve();

    ll cnt = 0, cntt=0;

    forn(i,0,prime.size())
    {
        if(cntt==20)
            break;
        cout<<prime[i]<<el;
        fflush(stdout);
        cntt++;
        
        string s;
        cin>>s;
        
        if(s=="yes")
            {                
                cnt++;         
             //   cout<<"cnt-- "<<cnt<<el;       
                if(cnt>=2)
                    break;
                
                if(prime[i]*prime[i]<=100)
                {
                   cout<<prime[i]*prime[i]<<el;
                   cntt++;
                
                   cin>>s;
                
                   if(s=="yes")
                     cnt++;                      
                }
              
            }
        if(cnt>=2)
            break;
            
    }
    
    if(cnt<2)
        cout<<"prime"<<el;
    else
        cout<<"composite"<<el;
    fflush(stdout);
    


    return 0;
}



