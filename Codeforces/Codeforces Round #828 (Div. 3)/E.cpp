
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
#define sz               100050



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

//  PRIME FACTORS
bitset<sz>bs;
vl prime, factors;

void sieve()
{
    for(ll i=2; i<=sz; i++)
    {
        if(bs[i]==0)
        {
            for(ll j = i*i; j<=sz; j+=i)				
                bs[j]=1;
            prime.pb(i);
        }
    }
}
void pf(ll n)
{
    ll ind=0,pr=prime[ind];
    while(pr*pr<=n)
    {
        while(n%pr==0)
        {
            n/=pr;
            factors.pb(pr);
        }
        pr=prime[ind++];
    }
    
    if(n!=1)
        factors.pb(n);
}


int main()
{

   // fio

    ll t,i,j,n,m,k,a,b,c=0,d,tc=1,bug1=1;
    sieve();
    tst
    {
        cin>>a>>b>>c>>d;
        
        m = a*b;
        
        factors.clear();
        pf(m);
        
        sort(factors.rbegin(),factors.rend());
        
        
        pll mx,mn;
        
        if(c<=d)
        {
            mn = pll(a,c);
            mx = pll(b,d);
        }
        else
        {
            mx = pll(a,c);
            mn = pll(b,d);            
        }
        
        ll x = 1, i =0;
        while(i<factors.size() && x*factors[i]<=mx.second)
        {
            x*=factors[i++];
        }
        
        ll y = m/x;
        
        
        y = (mn.second/y)*y;
        
        x = (mx.second/x)*x;
        
        //printf("y-- %lld  x--   %lld\n", y,x);
        
        if(y>mn.first  && y<= mn.second && x>mx.first && x<=mx.second)
        cout<<y<<" "<<x<<el;
        else
        cout<<-1<<" "<<-1<<el;

    }


    return 0;
}



/*

5 4

4 2 3 5 1

*/

