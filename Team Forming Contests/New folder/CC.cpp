
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



typedef    pair<double,double>pll;
typedef    pair<ll,pll>pl;
typedef    unordered_map<ll,ll>mll;
typedef    vector<pll>vl;
typedef    vector<double>vll;
typedef    vector<pl>vlp;
typedef    set<ll>sl;
typedef    multiset<ll>msl;
typedef    priority_queue<ll>prl;

const ll mod=1000000007;

int main()
{

    fio

    ll t,i,j,n,m,k,c=0,tc=1,bug1=1;

    //tst
    {
    	
    	cin>>n;
    	
    	vl vcc;
        double a,b;
    	
    	forn(i,0,n)
    	{
    		cin>>a>>b;
    		vcc.pb(pll(a,b));
    	}
    	
    	vl vc;
    	
    	double xx = (vcc[0].first+vcc[n-1].first)/2.0;
    	double yy = (vcc[0].second+vcc[n-1].second)/2.0;
    	
    	vc.pb(pll(xx,yy));
    	
    	 
    	forn(i,1,n)
    	{
    		xx = (vcc[i].first+vcc[i-1].first)/2.0;
    		yy =  (vcc[i].second+vcc[i-1].second)/2.0;
    		
    		vc.pb(pll(xx,yy));
    	}
    	
    	
    	
    	
    	
    	double ans = 0.0;
    	forn(i,0,n)
    	{
    		
    		forn(j,0,n)
    		{
    			
    			double x = (vc[i].first-vc[j].first)*(vc[i].first-vc[j].first) + (vc[i].second-vc[j].second)*(vc[i].second-vc[j].second);
    			x = sqrt(x);
    			ans = max(ans,x);
    			
    		}
    	}
    	
    	
    	cout<<fixed<<setprecision(8)<<(ans/2.0)<<el;


    }


    return 0;
}



