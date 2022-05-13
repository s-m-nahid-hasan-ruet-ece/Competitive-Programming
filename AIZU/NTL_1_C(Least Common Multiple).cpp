
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
#define sz               200050



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




int main()
{

    fio

    ll t,i,j,n,m,k,a,b,c=0,tc=1,bug1=1;
    sieve();
    
   // tst
    {
    	
    	cin>>n;
    	
    	ll ar[n+5];
    	
    	forn(i,0,n)
    	  cin>>ar[i];
    	  
    	ll ans = 1;
    	  
    	  
    	for(i = 0; ;)
    	{
    		c = 0;
    		for(j = 0;j<n;j++)
    		{
    			if(ar[j]%prime[i]==0)
    				c++;
    		}
    		
    		if(c>1)
    		{
    		    for(j = 0;j<n;j++)
    		     { 
    			      if(ar[j]%prime[i]==0)
    			      	ar[j]/=prime[i];
    		     }	
    		     
    		     ans*= prime[i];
    		}
    		else
    			i++;
    		
    		
    		if(i>1000)
    			break;
    	}
    	
    	for(i = 0;i<n;i++)
    		ans *= ar[i];
    	
    	
    	cout<<ans<<el;
    	
    	
    	


    }


    return 0;
}



