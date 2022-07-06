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


const ll mod=1000000007;

int main()
{

    fio

    ll t,i,j,n,m,k,a,b,c=0,tc=1,bug1=1;

    //tst
    {
    	cin>>n;
        m = n;
    	
    	string s[n+5];
    	
    	forn(i,0,n)
    	cin>>s[i];
    	
    	ll cnt = 0;
    	ll f= 1;
    	
    	forn(i,0,n)
    	{
    		ll cnt1 = 0;
    		forn(j,0,m)
    		{
    			if(s[i][j]=='W')
    				cnt1++;
    			if(j+2<m)
    			{
    				ll x= 0;
    				if(s[i][j]=='W')
    					x++;
    				if(s[i][j+1]=='W')
    					x++;
    				if(s[i][j+2]=='W')
    					x++;
    				
    				if(x==3 || x==0)
    					f=0;
    					
    			}
    		}
    		if(cnt1!=(m-cnt1))
    			f = 0;
    		cnt+=cnt1;
    	}
    	//cout<<"f-- "<<f<<el;
    	forn(j,0,m)
    	{
    		ll cnt1 = 0;
    		forn(i,0,n)
    		{
    			if(s[i][j]=='W')
    				cnt1++;
    			if(i+2<n)
    			{
    				ll x= 0;
    				if(s[i][j]=='W')
    					x++;
    				if(s[i+1][j]=='W')
    					x++;
    				if(s[i+2][j]=='W')
    					x++;
    				
    				if(x==3 || x==0)
    					f=0;
    					
    			}
    		}
    		if(cnt1!=(m-cnt1))
    			f = 0;
    	}
        
        if(cnt!=(n*m)-cnt)
            f = 0;
    	
    	
    	cout<<f<<el;


    }


    return 0;
}



