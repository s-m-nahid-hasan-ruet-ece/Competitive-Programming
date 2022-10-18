
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

int main()
{

    fio

    ll t,i,j,n,m,k,a,b,c=0,tc=1,bug1=1;

    tst
    {
    	
    	mll mp;
    	vl vc;
    	
    	cin>>n;
    	
    	forn(i,0,n)
    	{
    		cin>>a;
    		
    		if(mp[a]==0)
    		{
    			vc.pb(a);
    		}    		
    		
    		mp[a]=i+1;	
    	}
    	
    	ll ans = -1;
    	forn(i,0,vc.size())
    	{
    		forn(j,i,vc.size())
    		{
    			if((__gcd(vc[i],vc[j])==1) || (vc[i]==vc[j] && vc[i]==1))
    				{
                        ans = max(ans,mp[vc[i]]+mp[vc[j]]);
                        //cout<<vc[i]<<" -- "<<vc[j]<<el;
                    }
    		}
    	}
    	
    	cout<<ans<<el;


    }


    return 0;
}



