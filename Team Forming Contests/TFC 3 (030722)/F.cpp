
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
    	
    	ll p,q,r,s;
    	cin>>n>>a>>b;
    	cin>>p>>q>>r>>s;
    	
    	string str[n+5];
    	
    	vl vc1,vc2;
    	vll vc;
    	
    	
    	for(i = max(1-a,1-b);i<=min(n-a,n-b);i++)
    		vc.pb(pll(a+i,b+i));
    	
    	for(i = max(1-a,b-n);i<=min(n-a,b-1);i++)
    		vc.pb(pll(a+i,b-i));    	
    	bug
    	
    	forn(i,1,n+1)
    	{
    		str[i]="";
    		forn(j,1,n+1)
              {
              	str[i][j]+='.';
              }        
        
        }
    	bug
        forn(i,0,vc.size())
        {
        	ll x=  vc[i].first;
        	ll y = vc[i].second;
        	
        	if(x>0 && x<=n && y>0 && y<=n)
        	{
        		str[x][y]='#';
        	}
        }
        bug
        
        forn(i,p,q+1)
    	{
    		
    		forn(j,r,s+1)
              {
              	cout<<str[i][j];
              }        
          cout<<el;
        }        
        
        

    }


    return 0;
}



