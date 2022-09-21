
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

   // tst
    {
    	cin>>n;
    	
    	string s;
    	cin>>s;
    	
    	ll sum= 0,mx = 0;
    	
    	forn(i,0,n)
    	{
    		sum+=s[i]-'0';
    		mx = max(mx, (ll)(s[i]-'0'));
    	}
        
        if(sum==0)
        {
            cout<<"YES"<<el;
            return 0;
        }
        
       // printf("sum--  %lld  mx--  %lld\n", sum,mx);
    	
    	vl vc;
    	
    	for(i = 1;i*i<=sum;i++)
    	{
    		if(sum%i==0)
    		{
    			vc.pb(i);
    			vc.pb(sum/i);
    		}
    	}
    	
    	ll f= 0;
    	forn(i,0,vc.size())
    	{
    		if(mx>vc[i])
    			continue;
    		
    		ll cnt = 0, x= 0;
    		
    		forn(j,0,n)
    		{
    			x+=s[j]-'0';
    			
    			if(x== vc[i])
    			{
    				cnt++;
    				x = 0;
    			}
    		
    		}
          //  printf("vc--  %lld  x--  %lld  cnt--  %lld\n", vc[i],x,cnt);
    		if(x==0 && cnt>1)
    			{
    				f = 1;
    				break;
    			}
    		
    	}
    	
    	if(f)
    		cout<<"YES"<<el;
    	else
    		cout<<"NO"<<el;
    	
    	


    }


    return 0;
}



