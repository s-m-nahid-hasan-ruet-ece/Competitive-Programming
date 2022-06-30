
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
typedef    map<pll,ll>mll;
typedef    vector<ll>vl;
typedef    vector<pll>vll;
typedef    vector<pl>vlp;
typedef    set<ll>sl;
typedef    multiset<ll>msl;
typedef    priority_queue<ll>prl;

const ll mod=1000000007;


//  DIJKSTRA
ll dis[sz+5];
vector<vll>edg;
mll w;

void init()
{	
    for(int i = 0;i<sz;i++)
    {
    	dis[i] =1e9;
    }
}



void dijkstra(ll s)
{
    for(ll i=0; i<=sz; i++)        dis[i]=10000000;
    priority_queue<pll,vector<pll>,greater<pll> >pq;
    pq.push(pll(0,s));
    dis[s]=0;
    while(!pq.empty())
    {
        ll u,d;
        pll x=pq.top();
        u=x.second;
        d=x.first;
        pq.pop();
        if(d>dis[u])            continue;
        for(ll i=0; i<edg[u].size(); i++)
        {
            pll v=edg[u][i];
            if(dis[u]+v.second<dis[v.first])
            {
                dis[v.first]=dis[u]+v.second;
                pq.push(pll(dis[v.first],v.first));
            }
        }
    }
}




int main()
{

    fio

    ll t,i,j,n,m,k,a,b,c=0,tc=1,bug1=1;

    //tst
    {
    	
    	cin>>n>>m>>k;
    	
    	forn(i,0,m)
    	{
    		cin>>a>>b>>c;
    		edg[a].pb(b);
    		w[pll(a,b)] = c;
    	}
    	
    	init();
    	
        forn(i,0,n)
    	  {
            if(vis[i]==0)
             bfs(k);
          }
    	
    	
    	forn(i,0,n)
          {
          	if(dis[i]==1e9)
          		cout<<"INF"<<el;
          	else
          		cout<<dis[i]<<el;
          }

    }


    return 0;
}



