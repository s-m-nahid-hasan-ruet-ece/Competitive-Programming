
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
#define sz               20050



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
ll mst()
{
    sort(edg.begin(),edg.end());
    ll mst_cost1=0, mst_cost2=0;
    init();
    for(ll i=0; i<edg.size(); i++)
    {
        if(Find(edg[i].second.first)!=Find(edg[i].second.second))
        {
            mst_cost1+=edg[i].first;
            Union(edg[i].second.first,edg[i].second.second);
        }
    }
    init();
    for(ll i=edg.size()-1; i>=0; i--)
    {
        if(Find(edg[i].second.first)!=Find(edg[i].second.second))
        {
            mst_cost2+=edg[i].first;
            Union(edg[i].second.first,edg[i].second.second);
        }
    }    
    
  //  printf("mst1--   %lld  mst2--   %lld\n", mst_cost1, mst_cost2);
    return mst_cost1+mst_cost2;
}



int main()
{

    fio

    ll t,i,j,n,m,k,a,b,c=0,tc=1,bug1=1;

    tst
    {
    	cin>>n;
    	
    	while(1)
    	{
    		cin>>a>>b>>c;
    		edg.pb(pl(c,pll(a,b)));
    		if(a==0 && b==0 && c==0)
    			break;
    	}
    	
    	ll r = mst();
    	
    	
    	if(r%2==0)
    	{
    		cout<<"Case "<<tc++<<": "<<r/2<<el;
    	}
    	else
    	{
    		cout<<"Case "<<tc++<<": "<<r<<"/"<<2<<el;    		
    	}
    	
        edg.clear();

    }


    return 0;
}



