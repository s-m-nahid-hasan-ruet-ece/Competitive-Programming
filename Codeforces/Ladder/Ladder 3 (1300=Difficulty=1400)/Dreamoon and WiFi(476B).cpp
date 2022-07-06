
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
    	string s,ss;
    	
    	cin>>s>>ss;
    	
    	ll cnt =0;
    	ll x =0,y = 0;
    	
    	
    	forn(i,0,s.size())
    	{
    		if(s[i]=='+')
    			x++;
    		else
    			x--;
    	}
    	bug
    	
    	forn(i,0,ss.size())
    	{
    		if(ss[i]=='?')
    			cnt++;
    		if(ss[i]=='+')
    			y++;
    	    else if(ss[i]=='-')
    	    	y--;
    	}
    	bug
    	if((x-y)>= cnt*-1 && (x-y)<=cnt)
    	{
    		ll h = 1<<cnt;
    		ll l = ((x-y)+cnt)/2;
    		
    		ll x=1,y=1,xx=cnt,yy=l;
    		
    		ll m = l;
    		
    		while(m--)
    		{
    			x*=xx;
    			y*=yy;
    			xx--;
    			yy--;
    		}
    		l = x/y;
    		
    		double ans = 1.0*h/l*1.0;
    		
    		cout<<ans<<el;
    		
    	}
    	else
    		cout<<0.0<<el;


    }


    return 0;
}



