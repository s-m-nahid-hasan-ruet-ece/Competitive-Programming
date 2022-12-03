
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
#define sz               2510



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


//  MINIMUM SPANNING TREE
ll par[sz];
void init()
{
    for(ll i=0; i<sz; i++)		par[i]=i;
}
ll Find(ll a)
{
    if(par[a]==a)		return a;
    return par[a]=Find(par[a]);
}
void Union(ll a,ll b)
{
    par[Find(b)]=Find(a);
}
vlp edg;
mll mp;
ll mst()
{
	init();
    sort(edg.begin(),edg.end());
    ll mst_cost=0;
    
   // forn(i,0,edg.size())
   // printf("%lld - %lld  :  %lld\n", edg[i].second.first,edg[i].second.second,edg[i].first);
    for(ll i=0; i<edg.size(); i++)
    {
        if(Find(edg[i].second.first)!=Find(edg[i].second.second))
        {
            mst_cost+=edg[i].first;
            mp[edg[i].second.first]=1;
            mp[edg[i].second.second]=1;
            Union(edg[i].second.first,edg[i].second.second);
        }
    }
   // printf("mst_cost:  %lld\n", mst_cost);
    return mst_cost;
}



int main()
{

    fio

    ll t,i,j,n,m,k,a,b,c=0,tc=1,bug1=1;

    tst
    {
    	cin>>n;
    	ll total_wire = 0, f =1;
    	forn(i,0,n)
    	{
    		forn(j,0,n)
    		{
    			cin>>a;
    			total_wire+=a;
    			if(i!=j && a!=0)
    			{
    			    edg.pb(pl(a,pll(i+1,j+1)));
    			}
    		}
    	}
    	//printf("total_wire:  %lld\n", total_wire);
    	ll r = mst();
        
        sl st;    
        forn(i,1,n+1)
        {
            if(mp[i]==0)
            {
                f = 0;
                break;
            }
            ll x= Find(i);
            st.insert(x);
        }
    
        if(f && st.size()==1)
    	cout<<"Case "<<tc++<<": "<<total_wire-r<<el;
        else
        cout<<"Case "<<tc++<<": "<<-1<<el;
        
        mp.clear();
        edg.clear();
        


    }


    return 0;
}



