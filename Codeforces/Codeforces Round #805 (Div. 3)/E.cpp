
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
    	cin>>n;
    	
    	mll mp1,mp2;
    	ll f= 0;
        vl edges[n+5];
        vlp vc;
        sl st1,st2;
    	
    	forn(i,0,n)
    	{
    		cin>>a>>b;
            edges[a].pb(b);
            edges[b].pb(a);
    	}
        
        mp1[1]++;
        mp1[edges[1][0]]++;
        mp2[1]++;
        mp2[edges[1][1]]++;
        
        st1.insert(edges[1][1]);
        st2.insert(edges[1][0]);
        
        
        
        while(1)
        {
           auto I1 = st1.begin(), I2 = st2.begin() ;
           ll x1 = *I1, x2 = *I2;
           
           st1.erase(x1);
           st2.erase(x2);
           
           mp1[edges[x1][1]]++;
           mp2[edges[x2][1]]++;
           
           st1.insert()
           
           
        }
        
        
       
       
       
       
       
       
       
    	
    	if(!f)
    		cout<<"YES"<<el;
    	else
    		cout<<"NO"<<el;


    }


    return 0;
}



