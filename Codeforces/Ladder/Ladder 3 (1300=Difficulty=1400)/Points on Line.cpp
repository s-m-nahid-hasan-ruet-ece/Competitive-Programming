
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

    //tst
    {

    cin>>n>>m;
    vl vc;    
    forn(i,0,n)
    {
    	cin>>a;
    	vc.pb(a);
    }
    
    
    if(n<3)
    {
    	cout<<0<<el;
    	return 0;
    }
    
       
    
    ll ans=0;
    forn(i,0,n)
    {
    	ll l = lower_bound(vc.begin(),vc.end(),vc[i]+m)-vc.begin();
    	
    	 //printf("i-- %lld  l---%lld \n",i ,l);
    	 if(l==n)
    	 	l--;
        if(vc[l]-vc[i]>m)
            l--;

    	if( (l-i)<2 || vc[l]-vc[i]>m)
    		continue;
    	
    	ll x = l-i;    	
    
    	

    	if(x>2)
    	{
    		ans+=((x-1)*x)/2;
    	}
    	else
    		ans++;    		
    	//printf("i--  %lld l--  %lld ans--- %lld x---%lld\n",i,l, ans,x);
    }
    
    cout<<ans<<el;


 }
    	    return 0;

}



