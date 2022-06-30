
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

ll fact[sz];

int main()
{

    fio

    ll t,i,j,n,m,k,a,b,c=0,tc=1,bug1=1;
    
    
    fact[0]=1;
    forn(i,1,sz)
    {
    	fact[i]= fact[i-1]*i;
    	fact[i]%=mod;
    }
    
    
    tst
    {
    	
    	cin>>n;
    	
    	ll ar[n+5];
        ll s = 0;
    	
    	forn(i,0,n)
    	{
            cin>>ar[i];
            s+=ar[i];
        }
    //	cout<<"B1"<<el;
    	
    	ll ans = 1;
    	m = s;
    	
    	forn(i,0,n)
    	{
           cout<<"m--" <<m<<el;
           printf("factm---  %lld  factar--  %lld\n",fact[m],fact[ar[i]] );
    		ans*= fact[m]/(fact[ar[i]]*fact[m-ar[i]]);
    		ans%=mod;
    		m-=ar[i];
    	}
        
    	
    	cout<<ans<<el;


    }


    return 0;
}



