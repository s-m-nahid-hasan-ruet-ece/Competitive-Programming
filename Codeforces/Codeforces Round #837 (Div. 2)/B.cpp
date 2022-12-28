
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
typedef    pair<pll,ll>pl;
typedef    map<pll,ll>mll;
typedef    vector<ll>vl;
typedef    vector<pll>vll;
typedef    vector<pl>vlp;
typedef    set<ll>sl;
typedef    multiset<ll>msl;
typedef    priority_queue<ll>prl;

const ll mod=1000000007;

//  DSU
ll par1[sz],par2[sz];
void init()
{
    for(ll i=0; i<sz; i++)		
    	{
    		par1[i]=i;
    		par2[i]=i;
    	}
}
ll Find1(ll a)
{
    if(par1[a]==a)		return a;
    return par1[a]=Find1(par1[a]);
}
void Union1(ll a,ll b)
{
    par1[Find1(b)]=Find1(a);
}
ll Find2(ll a)
{
    if(par2[a]==a)		return a;
    return par2[a]=Find2(par2[a]);
}
void Union2(ll a,ll b)
{
    par2[Find2(b)]=Find2(a);
}


int main()
{

    fio

    ll t,i,j,n,m,k,a,b,c=0,tc=1,bug1=1;

    tst
    {
    	cin>>n>>m;
    	mll mp;
    	init();
    	forn(i,0,m)
    	{
    		cin>>a>>b;
    		Union1(a,b);
    	}
    	
    	forn(i,1,n)
    	{
    		if(Find1(i)!=Find1(i+1))
    			Union2(i,i+1);    			
    	}
    	
    	ll ans = n;
    	forn(i,1,n)
    	{
    		ll l = i;
    		
    		while(i<n && Find2(i)!=Find2(i+1))
    			{
    				printf("i--  %lld  f--  %lld\n", i,Find2(i));
    				
    				i++;
    			}
    	   
    	    printf("l--  %lld  i-- %lld\n",l,i );
    	    ll x= i- l;
    		ans+=(x*(x+1))/2;
    	}
    	
    	cout<<ans<<el;
    	
    


    }


    return 0;
}



