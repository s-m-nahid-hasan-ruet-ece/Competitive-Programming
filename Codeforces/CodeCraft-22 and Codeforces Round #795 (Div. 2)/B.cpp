
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
#define szs               200050


typedef    set<ll>sl;
typedef    pair<ll,ll>pll;
typedef    pair<ll,pll>pl;
typedef    vector<ll>vl;
typedef    unordered_map<ll,ll>mll;
typedef    queue<ll>qu;
typedef    unordered_map<ll,vl>mvl;
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
    	
    	mll mp;
    	
    	mvl mpp;
    	
    	ll ar[n+5];
        mll vis;
        mll vis2;
    	
    	forn(i,0,n)
    	{
    		cin>>ar[i];
    		mp[ar[i]]++;
    		mpp[ar[i]].pb(i+1);
    	}
    	
    	
    	ll f = 1;
    	
    	forn(i,0,n)
    	{
    		if(mp[ar[i]]==1)
    		{
    			f = 0;
    			break;
    		}
    	}
    	
    	
    	if(f)
    	{
    		forn(i,0,n)
    		{
                
                if(vis[ar[i]]==1)
                    continue;
                vis[ar[i]]=1;
                ll sz = mpp[ar[i]].size();
                swap(mpp[ar[i]][0],mpp[ar[i]][sz-1]);
                
                
                for(j = 1;j<sz-1;j+=2)
                {
                swap(mpp[ar[i]][j],mpp[ar[i]][j+1]);                    
                }
                
             /*   
                for(j = 0;j<sz;j++)
                cout<<mpp[ar[i]][j]<<" ";
            
            cout<<el;
            */
               
    		}
            
            
            
            forn(i,0,n)
            {
                if(vis[ar[i]]<=mp[ar[i]])
                 cout<<mpp[ar[i]][vis2[ar[i]]]<<" ";
                
                vis[ar[i]]++;
            }
            
    		cout<<el;
    	}
    	else
    		cout<<-1<<el;
    	
    	


    }


    return 0;
}



/*

5
1 2 2 1 2

*/

