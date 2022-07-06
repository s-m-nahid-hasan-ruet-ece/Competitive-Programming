
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

    //fio

    ll t,i,j,n,m,k,a,b,c=0,tc=1,bug1=1;

   // tst
    {    	
    	string s, str="";
    	mll mc;

    	cin>>n>>m;
    	cin>>s;
    	
    	ll l=0, r=n-1;
    	ll mx = 0;
    	
    	forn(i,0,n)
    	{
    		mc[s[i]]++;
    		mx = max(mx,mc[s[i]]);
    	}
    	
    	if(mx==n)
    	{
    		m--;
            while(m--)
            {
            	s+=s[0];
            }
            
            cout<<s<<el;
            return 0;
    	}
    	
    	    	
    	string ss="", ss1= "",str1="";

    	ll ind = 0;
    	
    	forn(i,1,n)
    	{
    		string s1="";
    		forn(j,i,n)
    		{
    			s1+=s[j];
    		}
    		ll f= 0;
    		forn(j,0,s1.size())
    		{
    			if(s[j]!=s1[j])
    				{
    					f = 1;
    					break;
    				}
    		}
    		
    		if(f==0 && s1.size()>ss1.size())
    		 {
    		 	ss1 =s1;
    		 	ind= i;

    		 }    		
    		
    	}
    	if(ind==0)
    		ind=n;
    	
    	forn(i,0,ind)
    	str1+=s[i];
    	
    	
    	

          
        string ans = "",ans1="";
        ll m1 = m;

        
        while(m1--)
        	ans1+=str1;
        
        ans1+=ss1;
        
        cout<<ans1<<el;

    


        }   
         return 0;

}



/*

aaaaa

*/