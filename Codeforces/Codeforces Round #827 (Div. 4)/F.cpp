
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

    tst
    {
    	cin>>n;
    	
    	mll mps,mpt;
        ll cs=0,ct=0;
    	while(n--)
    	{
    		string s;
    		cin>>a>>b>>s;
    		
    		if(a==1)
    		{
    			forn(i,0,s.size())
    			{
    				mps[s[i]]+=b;
    			}
                cs+=b*s.size();
    		}
    		else
    		{
    		   forn(i,0,s.size())
    			{
    				mpt[s[i]]+=b;
    			}	
                ct+=b*s.size();
    		}
    		
    		ll cnts=0,cntt=0;
    		char ss='1',tt='1';
    		
    		for(char a = 'a';a<='z';a++)
    		{
    			if(mps[a])
    			{
    				cnts=mps[a];
    				ss = a;
    				break;
    			}
    		}
    		
    		for(char a = 'z';a>='a';a--)
    		{
    			if(mpt[a])
    			{
    				cntt=mpt[a];
    				tt = a;
    				break;
    			}
    		}
    		
    		if((ss=='1' && tt!='1') || (ss!='1' && tt!='1' && ss<tt))
    		{
    			cout<<"YES"<<el;
    		}
    		else
    		{
    			if(ss==tt && cnts==cs && cnts<cntt)
    				cout<<"YES"<<el;
    			else
    				cout<<"NO"<<el;
    		}
    		
    	}


    }


    return 0;
}



