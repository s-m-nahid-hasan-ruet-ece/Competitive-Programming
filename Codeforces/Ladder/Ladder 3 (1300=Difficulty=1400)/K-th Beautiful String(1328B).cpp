
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
    
    vl vc;
    vc.pb(0);
    
    forn(i,1,100010)
    {
    	vc.pb(i+vc[i-1]);
    }
    
    
    tst
    {
    	
    	cin>>n>>m;
    	
    	ll l = lower_bound(vc.begin(),vc.end(),m)-vc.begin();
       // printf("l--  %lld\n", l);
        
        ll first,second;
        
        first = n - l -1;
        second = m - vc[l-1];
        second = n - second;
        
        string s = "";
        
        forn(i,0,n)
        s+='a';
        
        s[first]='b';
        s[second]='b';
       // printf("1st--  %lld  2nd--  %lld\n",first,second );
        cout<<s<<el;
        

    }


    return 0;
}



