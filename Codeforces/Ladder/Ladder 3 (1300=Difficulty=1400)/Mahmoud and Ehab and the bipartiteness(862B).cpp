
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


//  BFS
bool vis[sz];
ll dis[sz];
vl edg[sz];
ll n;
ll bfs(ll s)
{
    vis[s]=1;
    dis[s]=1;
    queue<ll>q;
    q.push(s);
    while(!q.empty())
    {
        ll u,v;
        u= q.front();
        q.pop();
        for(ll i=0; i<edg[u].size(); i++)
        {
            v = edg[u][i];
            if(vis[v]==0)
            {
            	if(dis[u]==1)
            		dis[v]=2;
            	else
            		dis[v]=1;
                vis[v]=1;
                q.push(v);
            }
        }
    }
    
    ll cnt1=0,cnt2=0;
    
    forn(i,1,n+1)
    {
    	if(dis[i]==1)
    		cnt1++;
    	else if(dis[i]==2)
    		cnt2++;
    }
    
    return (cnt1*cnt2)-n+1;
}



int main()
{

    fio

    ll t,i,j,m,k,a,b,c=0,tc=1,bug1=1;

    //tst
    {
    	
    	cin>>n;
    	
    	forn(i,0,n-1)
    	{
    		cin>>a>>b;
    		edg[a].pb(b);
    		edg[b].pb(a);
    	}
    	
    	
    	ll ans  = bfs(1);
    	
    	cout<<ans<<el;

    }


    return 0;
}



