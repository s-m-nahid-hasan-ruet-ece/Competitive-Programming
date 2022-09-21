
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
string s,tt,p;
ll dp[110][110];

ll lcs(ll i,ll j)
{
    if(i>=s.size() || j>=tt.size())
        return 0;
    
    if(dp[i][j]!=-1)
        return dp[i][j];
    
    ll ans = 0;
    
    if(s[i]==tt[j])
        ans+= 1+lcs(i+1,j+1);
    else
    {
        ans=max(lcs(i+1,j),ans);
        ans=max(ans,lcs(i,j+1));
    }
    
    dp[i][j] = ans;
    
    return dp[i][j];
    
}



int main()
{

    fio

    ll t,i,j,n,m,k,a,b,c=0,tc=1,bug1=1;

    tst
    {
    	cin>>s>>tt>>p;
    	
    	mll mp1,mp2,mp3;
    	
    	forn(i,0,s.size())
    	mp1[s[i]]++;
    	forn(i,0,p.size())
    	mp2[p[i]]++;
    	forn(i,0,tt.size())
    	mp3[tt[i]]++;

        ll f= 0;    	
    	for(char ii = 'a' ; ii<='z';ii++)
    	{
    		if(mp1[ii]>mp3[ii])    			
    		   f = 1;
    		else if(mp1[ii]+mp2[ii]<mp3[ii])
    		   f = 1;
    		
    		if(f)
    			break;
    	}
    	
    	
    	if(!f)
        {
            
            memset(dp,-1,sizeof dp);
            
            ll r = lcs(0,0);
            //printf("r-- %lld\n", r);
            
            if(r == s.size())
                cout<<"YES"<<el;
            else
                cout<<"NO"<<el;

           

        }
        else
        cout<<"NO"<<el;
    	


    }


    return 0;
}



