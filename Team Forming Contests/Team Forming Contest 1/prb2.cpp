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

    ll t,n,i,j,m,w,p,k,a,b,c=0,tc=1;

    //tst
    {

    cin>>n>>w>>p;
    
    ll ar[n+5][n+5];
    
    for(i = 0;i<n+5;i++)
    {
        for(j = 0 ;j<n+5;j++)
            ar[i][j]=INT_MAX;
    }
    
    for(i = 0;i<w;i++)
        {
           cin>>a>>b>>m;
           ar[a][b] = m;
           ar[b][a] = m;
            
        }
        
    for(k = 1;k<=n;k++)
    {
        for(i = 1;i<=n;i++)
        {
            for(j=1;j<=n;j++)
            {
                if(ar[i][j]>ar[i][k] + ar[k][j])
                    ar[i][j] = ar[i][k] + ar[k][j];
            }
        }
    }
    
    while(p--)
    {
        cin>>a>>b;
        cout<<ar[a][b]<<el;
    }
    
    
    

    
        

    }


    return 0;
}




