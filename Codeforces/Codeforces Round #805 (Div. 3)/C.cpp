
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


typedef    vector<ll>vl;
typedef    pair<ll,ll>pll;
typedef    pair<ll,pll>pl;
typedef    map<ll,ll>ml;
typedef    map<ll,vl>mll;
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
    	cin>>n>>k;
    	
    	ll ar[n+5];
        ll ind = 1;
        ml vis;
    	
    	forn(i,0,n)
    	{
    		cin>>ar[i];
            if(vis[ar[i]]==0)
                vis[ar[i]]=ind++;
    	}
        
        vl vc[ind];
        
        forn(i,0,n)
        {
            vc[vis[ar[i]]].pb(i);
        }
        
        
        
        
    	
    	while(k--)
    	{
    		cin>>a>>b;
            if(vis[a]==0 || vis[b]==0)
            {
                cout<<"NO"<<el;
                continue;
            }
            
    		if(vc[vis[a]][0]<vc[vis[b]][vc[vis[b]].size()-1])
    			cout<<"YES"<<el;
    		else
    			cout<<"NO"<<el;
    		
    	}


    }


    return 0;
}



