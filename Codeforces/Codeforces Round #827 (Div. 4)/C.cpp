
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
    	
    	string s[10];
    	
    	forn(i,0,8)
    	cin>>s[i];
    	
    	
    	char ans='F';
    	
    	forn(i,0,8)
    	{
    		if(s[0][i]=='B')
    		{
    			ll cnt = 0;
    		   forn(j,0,8)
    		    {  
    			   if(s[j][i]=='B')
    			   	cnt++;
    		    }	
    		    if(cnt==8)
    		    	ans = 'B';
    		}
    		
    	}
    	
    	forn(i,0,8)
    	{
    		if(s[i][0]=='R')
    		{
    			ll cnt = 0;
    		   forn(j,0,8)
    		    {  
    			   if(s[i][j]=='R')
    			   	cnt++;
    		    }	
    		    if(cnt==8)
    		    	ans = 'R';
    		}
    		
    	}
    	
    	cout<<ans<<el;


    }


    return 0;
}



