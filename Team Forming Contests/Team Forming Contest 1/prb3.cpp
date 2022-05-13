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

    ll t,n,i,j,m,k,a,b,c=0,tc=1;

  //  tst
    {
      cin>>n>>m;
      
      ll ans = 0;
      
      for(i = 2 ;i<m;i++)
      {
          a = m/i;
          b = n/i;
          
          c = a - b;
          
          if(n%i==0)
            c++;
          c--;  
          if(i>=n)
          c--;
        c = max(c,0LL);
                   cout<<" ii-- "<<i<<" "<<c<<el;    
          ans += (c*(c+1))/2;
      }
      
      cout<<"-- "<<ans<<el;
      
      
      for(i = n; i<m;i++)
      {
         c = m/i;
         
         c--;
         c = max(c,0LL);
         
         cout<<" i-- "<<i<<" "<<c<<el;
         
         ans -= c;        
      }
      
      cout<<ans<<el;
     
      
     
        

    }


    return 0;
}




