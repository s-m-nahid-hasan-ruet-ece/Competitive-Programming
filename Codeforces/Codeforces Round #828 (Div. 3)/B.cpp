
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
    	cin>>n>>m;
    	ll ar[n];
    	ll s= 0,cnt0=0,cnt1=0;
        ll odd=0,even=0;

    	forn(i,0,n)
    	{
            cin>>ar[i];
            s+=ar[i];
            if(ar[i]%2)
                odd++;
            else
                even++;
        }
    	
    	
    	while(m--)
    	{
    		cin>>a>>b;
    		if(a%2)
            {                
                s+=odd*b;

                if(b%2)
                   {                    
                    even+=odd;
                    odd= 0;
                   }
            }
    		else
    		{
                s+=even*b;
                if(b%2)
                {
                    odd+=even;
                    even = 0;
                }
            }
            cout<<s<<el;
    	}
    	

    }


    return 0;
}



