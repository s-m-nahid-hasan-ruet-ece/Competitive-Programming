
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
    	ll north=0,west = 0,f= 0;
    	
    	
    	cin>>n;
    	
    	while(n--)
    	{
    		ll x;
    		string s;
    		
    		cin>>x>>s;
    		
    		if(s=="South" && north!=-20000)
    			north-=x;
    		else if(s=="North" && north!=0)
    			north+=x;
    		else if(s=="West" && !(north==0 || north==-20000))
    			west+=x;
    		else if(s=="East" && !(north==0 || north==-20000))
    			west-=x;
            else
                f = 1;
            
            if(north<-20000 || north>0)                
            f = 1;
            //north%=20000;
            if(west<-20000 || west>20000)
            west%=20000;
        
            //cout<<north<<"  --  "<<west<<el;

    	}
    	
        
        if(!f && north==0)
            cout<<"YES"<<el;
        else
            cout<<"NO"<<el;


    }


    return 0;
}



/*

3
10314 South
15961 North
5647 South

*/