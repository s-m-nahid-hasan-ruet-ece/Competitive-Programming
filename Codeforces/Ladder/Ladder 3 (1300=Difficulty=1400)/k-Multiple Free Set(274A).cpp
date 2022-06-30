
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
    	
    	mll mp1,mp2;
    	vl vc;
    	
    	forn(i,0,n)
    	{
    		cin>>a;
    		vc.pb(a);
    		mp1[a]=1;
            mp2[a]=1;
    	}
        
        
        sort(vc.begin(),vc.end());
    	
    	ll cnt1 = 0, cnt2=0;
    	
    	forn(i,0,n)
    	{
    		if(mp1[vc[i]]==1)
    		{
    			cnt1++;
    			if(mp1[m*vc[i]]==1)
    				mp1[m*vc[i]]=0;
    		}
    	}
    	/*
        for(i = n-1;i>=0;i--)
        {
         if(mp2[vc[i]]==1)
            {
                cnt2++;
                if(mp2[vc[i]/2]==1)
                    mp2[vc[i]/2]=0;
            }   
        }
    	*/
        
        if(cnt1>cnt2)
    	 cout<<cnt1<<el;
        else
            cout<<cnt2<<el;
    	
    	
    	


    }


    return 0;
}

/*
7 2
2 3 6 5 4 10 15

*/

