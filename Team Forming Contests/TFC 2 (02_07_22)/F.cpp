
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
#define sz               60



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
string s[sz];
ll n,m;



//  BFS
bool vis[sz][sz];
ll dis[sz][sz];
ll x[4]={1,-1,0,0};
ll y[4]={0,0,1,-1};

void init()
{
    memset(vis,0,sizeof vis);
    memset(dis,0,sizeof dis);
}
ll bfs()
{
    vis[0][0]=1;
    queue<pll>q;
    dis[0][0]=1;
    q.push(pll(0,0));
    while(!q.empty())
    {
        pll u,v;
        u= q.front();
        q.pop();
        
        
        forn(i,0,4)
        {
        	ll xx,yy;
        	xx = u.first + x[i];
        	yy = u.second + y[i];
        	
        	
        	if(xx<n && xx>=0 && yy<m && yy>=0 && s[xx][yy]!='#' && vis[xx][yy]==0)
        	{
               dis[xx][yy]=dis[u.first][u.second]+1;
                ///printf("x-- %lld  y--  %lld\n",xx,yy );
        	   if(xx==n-1 && yy==m-1)
        	   {
        	   	return dis[n-1][m-1];
        	   }   	
        	
        	   q.push(pll(xx,yy));
        	   vis[xx][yy]=1;
        	}
        }
        
       
    }
    
    return 0;
}





int main()
{

    fio

    ll t,i,j,k,a,b,c=0,tc=1,bug1=1;

    //tst
    {
    	
    	cin>>n>>m;
    	
    	forn(i,0,n)
    	{
    		cin>>s[i];
    	}
    	
    	c=0;
    	forn(i,0,n)
    	{
    		forn(j,0,m)
    		{
    			if(s[i][j]!='#')
    				c++;
    		}
    	}
    	 
    	init();
    	ll r = bfs();
    	
    	
    	if(r==0)
    		cout<<-1<<el;
    	else
    		cout<<c-r<<el;
    	
    	
    	


    }


    return 0;
}




/*
5 5
..###
.#...
.#.#.
.#.#.
...#.

*/