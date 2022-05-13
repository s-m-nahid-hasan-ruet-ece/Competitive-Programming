#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define dl double
#define forn(i,a,n) for (ll i=a;i<n;i++)
#define per(i,a,n) for (ll i=n-1;i>=a;i--)
#define pb push_back
#define mp make_pair
#define all(x) (x).begin(),(x).end()
#define fi first
#define se second
#define SZ(x) ((ll)(x).size())
#define el endl
#define pi acos(-1.0)
#define fio     ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define tst cin>>t; while(t--)
#define sz 100050

typedef pair<ll,ll>pll;
typedef unordered_map<ll,ll>mll;
typedef vector<ll>vl;
typedef set<ll>sl;
typedef priority_queue<ll>prl;

const ll mod=1000000007;



int main()
{

    fio

    ll t,n,i,j,m,k,l,a,b,c=0,tc=1;

  //  tst
    {
        cin>>l>>n;
        
        if(n<=10)
        {
            cout<<0<<el;
            return 0;
        }
        
        for( i = 10;i<=min(n,99LL);i++)
        {
           // cout<<"i--  "<<i<<el;
            ll x,y;
            m = i;
            x= m%10;
            m/=10;
            y= m;
            
            if(i== x*10+y || x == 0)
                continue;
            else
                c++;
        }
        
        if(n<100)
        {
            cout<<c<<el;
            return 0;
        }
        
        for( i = 100;i<= min(n,999LL);i++)
        {
            ll x,y,z;
            m = i;
            x = m%10;
            m/=10;
            
            y = m%10;
            m/=10;
            
            z = m;
            
            if((x==y && z == 0) ||  (z==y && x == 0) || (x==z && y == 0))
                c++;
            
        }
        cout<<c<<el;

    	
        

    }


    return 0;
}




