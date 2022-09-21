
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

mll mp;
vl vc;
ll n,k;
ll dp[8001][8001];
ll solve(ll i,ll cnt)
{
    if(i==vc.size())
        return 1;
    if(dp[i][cnt]!=-1)
        return dp[i][cnt];
    ll ans = 0,ans1=0;

    if(cnt+1<=k)
    ans += (mp[vc[i]]%mod*solve(i+1,cnt+1)%mod)%mod;

    ans1 = solve(i+1,cnt)%mod;

    dp[i][cnt]= (ans+ans1)%mod;
    //printf("i--  %lld  dp--  %lld\n", i,dp[i][cnt]);
    return dp[i][cnt];
}

int main()
{

    fio

    ll t,i,j,m,a,b,c=0,tc=1,bug1=1;

    //tst
    {
        cin>>n>>k;

        ll ar[n];

        forn(i,0,n)
        {
            cin>>ar[i];

            if(mp[ar[i]]==0)
            {
                mp[ar[i]]++;
                vc.pb(ar[i]);
            }
            else
            mp[ar[i]]++;
        }
        ll cnt = 0;

        memset(dp,-1,sizeof dp);
        cnt = solve(0,0);

        cout<<cnt<<el;


    }


    return 0;
}



