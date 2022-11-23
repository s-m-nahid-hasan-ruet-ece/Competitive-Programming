
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
typedef    unordered_map<char,ll>mll;
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
    	string s;    	
    	cin>>s;
    	
    	mll mp;
        ll cnt = 0;
    	
    	forn(i,0,s.size())
    	{
    		mp[s[i]]++;
    	}
    	
    	string ss="";
    	char odd='0';
    	
    	
    	for(char a = 'A';a<='Z';a++)
    	{
    		ll x= mp[a];
    		
    		if(x%2==1)
    			{
                    odd =a;
                    cnt++;
                }
    		x/=2;
    		
    		while(x--)
    		{
    			ss+=a;
    		}
    	}
    	
    	if(odd!='0')
    	ss+=odd;
    
       	for(char a = 'Z';a>='A';a--)
    	{
    		ll x= mp[a];
    		
    		if(x%2==1)
    			odd =a;
    		x/=2;
    		
    		while(x--)
    		{
    			ss+=a;
    		}
    	}
    	
        if(cnt>1)
            cout<<"NO SOLUTION"<<el;
        else
    	cout<<ss<<el;
      
    	


    }


    return 0;
}



