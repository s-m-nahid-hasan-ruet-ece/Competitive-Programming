
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

    ll t,i,j,n,m,k,a,b,tc=1,bug1=1;

    tst
    {
    	double L,N,C,Ld,c;
    	cin>>L>>N>>C;
    	
    	
    	Ld= (1+N*C)*L;
    	
    	
    	double l=0,r=L, mid, d;
    	
    	c = L/2.0;
    	
    	while(l<r)
    	{
    		mid = (l+r)/2.0;
            d = ((c*c/(2.0*mid)) + (mid/2.0));
    		
    		
    		double x =  (d*(2.0* asin(c/d)))/Ld;
    		
    		if(x<1)
    			l = mid;
    		else if (x>1)
    			r = mid;
    		else
    		    break;    		
    	}
    	
        if(mid<0.000001)
            mid = 0;
        
        
    	cout<<fixed<<setprecision(7)<<"Case "<<tc++<<": "<<mid<<el;
    	
    	

    }


    return 0;
}



