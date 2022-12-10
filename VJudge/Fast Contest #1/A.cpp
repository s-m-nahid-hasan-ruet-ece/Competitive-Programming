
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


typedef    set<ll>sl;
typedef    pair<ll,ll>pll;
typedef    pair<ll,pll>pl;
typedef    map<ll,sl>mll;
typedef    vector<ll>vl;
typedef    vector<pll>vll;
typedef    vector<pl>vlp;
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
    	
    	ll cnt = 0;
    	mll mp1,mp2;
    	
    	forn(i,0,n)
    	{
    		string s;
    		cin>>s;
    		
    		mp1[s[0]-'a'].insert(s[1]-'a');
    		mp2[s[1]-'a'].insert(s[0]-'a');
    	}
    	
    	
    	forn(i,0,26)
    	{
            ll x = mp1[i].size();
            ll y = mp2[i].size();
            
            x = (x*(x-1))/2;
            y = (y*(y-1))/2;
          //  printf("i--  %lld  x-- %lld  y--  %lld\n", i,x,y);
    		cnt+=x;
    		cnt+=y;
    	}
    	
    	
    	cout<<cnt<<el;
    	
    	


    }


    return 0;
}



