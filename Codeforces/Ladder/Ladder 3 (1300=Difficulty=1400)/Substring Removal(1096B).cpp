
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

const ll mod=998244353;

int main()
{

    fio

    ll t,i,j,n,m,k,a,b,c=0,tc=1,bug1=1;

    //tst
    {
    	cin>>n;
    	string s;
    	cin>>s;
    	
    	ll cnt1=0,cnt2=0;
    	
    	forn(i,0,n)
    	{
    		if(s[i]==s[0])
    			cnt1++;
    		else
    			break;
    	}
    	
    	for(i=n-1;i>=0;i--)
    		{
    			if(s[i]==s[n-1])
    				cnt2++;
    			else
    				break;
    		}
    		
    		
    	if(s[0]==s[n-1])
    		cout<<((cnt1+1)*(cnt2+1))%mod<<el;
    	else
    		cout<<(cnt1+cnt2+1)<<el;


    }


    return 0;
}



