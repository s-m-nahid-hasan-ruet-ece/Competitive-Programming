
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
typedef    unordered_map<ll,pll>mpll;
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
    	
    	ll ar[n+5];
    	mll mp1,mp2;
    	mpll mp3;
    	ll mx=0,cnt= 0;
    	forn(i,0,n)
    	{
    		cin>>ar[i];
    		mp1[ar[i]]++;
    		mx=max(mp1[ar[i]],mx);
    		if(i==0 && mp3[ar[i]].first==0)
    			mp3[ar[i]]=pll(0,0);    			
    		else
    			{
                    ll x,y;
                    x = mp3[ar[i]].first;
                    y = mp3[ar[i]].second;
                    printf("x--  %lld  y--  %lld\n", x,y);
                    
                    if(mp3[ar[i]]==pll(0,0))
                    mp3[ar[i]]=pll(i,i);                                
                    else
                    mp3[ar[i]]=pll(min(mp3[ar[i]].first,i),max(mp3[ar[i]].second,i));
                }
    	}
        
        for(auto I =mp3.begin();I!=mp3.end();I++)
        {
            printf("%lld   %lld --  %lld\n", I->first,mp3[I->first].first,mp3[I->first].second);
        }
        
        
    	
    	ll mn = INT_MAX, id=-1;
        for(auto I = mp1.begin();I!=mp1.end();I++)
        {
            printf("%lld  --  %lld\n",I->first,I->second );
        	if(I->second==mx)
        	{
        		ll x= I->first;
        		if(mp3[x].second-mp3[x].first<mn)
        		{
        			mn = mp3[x].second-mp3[x].first;
        			id = x;
        		}
        	}
        }
        
        cout<<"id---  "<<id<<"  mn--  "<<mn<<el;
        cout<<mp3[id].first+1<<" "<<mp3[id].second+1<<el;
        
        
        


    }


    return 0;
}



