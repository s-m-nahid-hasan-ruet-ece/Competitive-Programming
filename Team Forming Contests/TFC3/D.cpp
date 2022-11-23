
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
#define sz               30



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


//  DSU
ll par[sz];
void init()
{
    for(ll i=0; i<=sz; i++)		par[i]=i;
}
ll Find(ll a)
{
    if(par[a]==a)		return a;
    return par[a]=Find(par[a]);
}
void Union(ll a,ll b)
{
    par[Find(b)]=Find(a);
}



int main()
{

    fio

    ll t,i,j,n,m,k,a,b,c=0,tc=1,bug1=1;

    //tst
    {
    	
    	init();
    	
    	cin>>n>>m;
    	
    	forn(i,0,n)
    	{
    		char ch1,ch2;
    		
    		cin>>ch1>>ch2;
    		
    		cout<<int(ch1-'a')<<" -t- "<<int(ch2-'a')<<" --s--"<<Find(int(ch2-'a'))<<el;
    		
    		Union(int(ch1-'a'),int(ch2-'a'));
    	}
    	
    	while(m--)
    	{
    		string s1,s2;
    		
    		cin>>s1>>s2;
    		
    		if(s1.size()!=s2.size())
    		{
    			cout<<"no"<<el;
    			continue;
    		}
    		else
    		{
    			ll f = 0;
    			forn(i,0,s1.size())
    			{
    				if(Find(int(s1[i]-'a'))==Find(int(s2[i]-'a')))
    					{
    						cout<<Find(int(s1[i]-'a'))<<"  --  "<<Find(s2[i])<<el;
    						continue;
    					}
    				else
    					{
    						f = 1;
    						break;
    					}
    			}
    			
    			if(f==0)
    				cout<<"yes"<<el;
    			else
    				cout<<"no"<<el;
    		}    		
    		
    
    	}


    }


    return 0;
}



