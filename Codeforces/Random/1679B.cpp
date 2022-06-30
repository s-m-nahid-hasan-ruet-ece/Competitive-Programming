
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
    	cin>>n>>m;
    	
    	ll cur = -1, cuSum = 0;
    	
    	ll ar[n+5];
    	ll mp[n+5];
    	mll mFlag;
    	ll flag = 1;
    	
    	forn(i,0,n)
    	{
    		cin>>ar[i];
            mp[i] = ar[i];
    	    cuSum+=ar[i];
    	}
        
        //cout<<"Sum: "<<cuSum<<el;
        
        
        while(m--)
        {
        	cin>>k;
        	
        	if(k==1)
        	{
        		cin>>a>>b;
        		
        		if(mFlag[a-1] != flag)
        		{
                    if(cur==-1)
                    {
                     mFlag[a-1] = flag;
                     cuSum += b - mp[a-1];
                     mp[a-1] = b;                                            
                    }
                    else
                    {
                     mFlag[a-1] = flag;
                     cuSum += b - cur;
                     mp[a-1] = b;                        
                    }
                    
        		}
        		else
        		{
        			cuSum += b - mp[a-1];
        			mp[a-1] = b;
        			mFlag[a-1] = flag;        	
        		}
                
                cout<<cuSum<<el;
    
        	}
        	else
        	{
        		cin>>a;
        		cuSum = a*n;
        		cur = a;
        		flag++;
        		
        		
        		cout<<cuSum<<el;
        	}
        }



    }


    return 0;
}



/*

5 6
1 2 3 4 5
1 1 5
1 1 5
2 10
1 5 11
1 4 1
2 1


*/