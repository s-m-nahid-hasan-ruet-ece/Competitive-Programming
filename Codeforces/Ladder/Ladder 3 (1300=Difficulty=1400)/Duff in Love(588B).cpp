
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
#define all(x)           (x).begin(),(x).end()
#define fi               first
#define se               second
#define bug              cout<<"bug --  "<<bug1++<<el;
#define SZ(x)            ((ll)(x).size())
#define el               endl
#define pi               acos(-1.0)
#define fio              ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define tst              cin>>t; while(t--)
#define sz               1000010



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
vl prime;
mll mp;
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
    ll ind=0,pr=prime[ind],cnt=0;
    while(pr*pr<=n)
    {
      if(n%pr==0)
      {
        cnt = 0;
        while(n%pr==0)
        {
            n/=pr;
            cnt++;
        }
        mp[pr]=cnt;
      }
        pr=prime[ind++];

    }

    if(n!=1)
        mp[n]++;
}



int main()
{

    fio

    ll t,i,j,n,m,k,a,b,c=0,tc=1,bug1=1;

    //tst
    {

        sieve();

        cin>>n;
        pf(n);

        ll ans = 1;

        for(auto I=mp.begin();I!=mp.end();I++)
        {
            ll x = I->first;
            ll y = I->second;
            //printf("x-- %lld   y-- %lld\n", x,y);

            if(y%2==0)
                y--;

            while(y--)
                ans*=x;
        }

        cout<<ans<<el;





    }


    return 0;
}



