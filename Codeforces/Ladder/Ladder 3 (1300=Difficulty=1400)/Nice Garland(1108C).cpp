
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
typedef    vector<char>vl;
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

    //tst
    {
    	cin>>n;
    	
    	string s;
    	cin>>s;
    	
    	ll mx = INT_MAX;
        string ans;
    	
    	
    	vl vc;
        vc.pb('R');
        vc.pb('B');
        vc.pb('G');        
        
        if(n<3)
        {
            if(n==1)
                cout<<0<<el<<s<<el;
            else
            {
                if(s[0]!=s[1])
                    cout<<0<<el<<s<<el;
                else
                {
                    if(s[0]==vc[0])
                        cout<<1<<el<<s[0]<<vc[1]<<el;
                    else if(s[0]==vc[1])
                        cout<<1<<el<<s[0]<<vc[2]<<el;
                    else if(s[0]==vc[2])
                        cout<<1<<el<<s[0]<<vc[1]<<el;                         
                }

                    
            }
            
            return 0;
        }
    	

    	
    	forn(i,0,3)
    	{
    		forn(j,0,3)
    		{
    			forn(k,0,3)
    			{
    				if(i==j || j==k || i==k)
    					continue;
    				string ss ="";
    				ss+=vc[i];
    				ss+=vc[j];
    				ss+=vc[k];
    				ll x=0;
    				while(ss.size()<n)
    				{
    					if(x%3==0)
    						ss+=vc[i];
    					else if(x%3==1)
    						ss+=vc[j];
    					else if(x%3==2)
    						ss+=vc[k];
    					x++;
    				}
    				ll cnt = 0;
    				forn(ii,0,n)
    				{
    					if(ss[ii]!=s[ii])
    						cnt++;
    				}
    				//cout<<"ss--  "<<ss<<el;
                    if(mx>cnt)
                    {
                        mx =cnt;
                        ans = ss;
                    }
    			}
    		}
    	}
    	
    	cout<<mx<<el;
        cout<<ans<<el;


    }


    return 0;
}



