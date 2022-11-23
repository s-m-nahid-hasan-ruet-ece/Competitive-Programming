
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
#define sz               30



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
void init()
{
    memset(vis,0,sizeof vis);
}
ll bfs(ll s,ll d)
{
    vis[s]=1;
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
                vis[v]=1;
                q.push(v);
                if(v== d)
                	return 1;
            }
        }
    }
    
    return 0;
}






int main()
{

    fio

    ll t,i,j,n,m,k,a,b,c=0,tc=1,bug1=1;

    tst
    {
    	
    	cin>>n>>m;
    	
    	forn(i,0,n)
    	{
    		char ch1,ch2;
    		cin>>ch1>>ch2;
    		
    		edg[ch1-'a'].pb(ch2-'a');
    	}
    	
    	while(m--)
    	{
    		string s1,s2;
    		
    		cin>s1>>s2;
    		
    		if(s1.size()!=s2.size())
    		{
    			cout<<"no"<<el;
    		}
    		else
    		{
    			ll f= 0;
    			forn(i,0,s1.size())
    			{
    				ll u = s1[i]-'a',v = s2[i]-'a';
    				init();
    				ll  r= bfs(u,v);
    				
    				if(r==0)
    				{
    					f = 1;
    					break;
    				}
    				
    			}
    			
    			if(f)
    				cout<<"no"<<el;
    			else
    				cout<<"yes"<<el;
    		}
    	}
    	
    	
    	


    }


    return 0;
}



