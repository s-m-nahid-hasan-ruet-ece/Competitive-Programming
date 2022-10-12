
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
    	ll ax,ay,bx,by,cx,cy,dx,dy;
    	
    	cin>>ax>>ay>>bx>>by>>cx>>cy>>dx>>dy;
    	
    	double d1,d2;
    	
    	
    	d1 = sqrt((ax-bx)*(ax-bx)+(ay-by)*(ay-by));
    	d2 = sqrt((cx-dx)*(cx-dx)+(cy-dy)*(cy-dy));
    	
        d1=d1*d1;
        d2=d2*d2;
        
        printf("d1--  %lf  d2--  %lf\n",d1,d2 );
        
        
        double l=0, r = 1000, mid,mid1,mid2, ds1,ds2;
        
        while((r-l)>0.000001)
        {
        	ds1 = 
        }
        
        double ans = mid * sqrt(d1-d2);
        
        cout<<fixed<<setprecision(7)<<"Case "<<tc++<<": "<<ans<<el;

    }


    return 0;
}



