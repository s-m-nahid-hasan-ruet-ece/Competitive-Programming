
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
#define sz               31623



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
bitset<sz+10>bs;
vl prime;
void sieve()
{
	bs[1]=0;
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
    
    tst
    {
    	cin>>n;
    	
    	ll ar[n];
    	
    	ll cn = 0;
    	forn(i,0,n)
    	{
    		cin>>ar[i];
    	}
    	    	
    	ll ans = 0;
    	sl st;
    	forn(i,0,prime.size())
    	{
    		ll cnt = 0;
    		forn(j,0,n)
    		{
    			if(ar[j]%prime[i]==0)
    				{
    					if(ar[j]>prime[i])
    						ar[j]/=prime[i];
    					cnt++;
    				}
    			
    			if(cnt>1)
    			{
    				ans = 1;
    				break;
    			}
    		}
    		if(ans)
    			break;
    	}
    	
    	forn(i,0,n)
    	st.insert(ar[i]);
    	
    	if(st.size()!=n)
    		ans = 1;
    	
    	if(ans)
    		cout<<"YES"<<el;
    	else
    		cout<<"NO"<<el;


    }


    return 0;
}


//3
//273773 273913 547546