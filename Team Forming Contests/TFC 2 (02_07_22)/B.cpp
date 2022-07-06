
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
#define sz               60



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
vlp vc;
ll n,k,m;
ll times[sz+5][3] , pcl[sz+5][3];
ll dp[151][7501][51];

ll solve(ll i,ll tm,ll cnt)
{
    printf("call i-- %lld   tm---  %lld\n",i,tm );
  if(i==vc.size())
    return 0;

  if(dp[i][tm][cnt]!=-1)
    return dp[i][tm][cnt];
  
  ll ans1 =0, ans2 = 0;
  
  if(tm+times[vc[i].second.first][vc[i].second.second]<=m)
    ans1+= vc[i].first+ solve(i+1,tm+times[vc[i].second.first][vc[i].second.second],cnt+1);
  else    printf("not called1 time--  %lld\n",tm+times[vc[i].second.first][vc[i].second.second]);

  ans2 = solve(i+1,0,0);

  dp[i][tm][cnt]= max(ans1,ans2);
  printf("i--  %lld  tm--  %lld  dp--- %lld  \n",i,tm,dp[i][tm][cnt] );
  return dp[i][tm][cnt];
     
}

int main()
{

    fio

    ll t,i,j,a,b,c=0,tc=1,bug1=1;

    tst
    {


        cin>>n>>k>>m;


        forn(i,0,n)
        {
            cin>>times[i][0]>>times[i][1]>>times[i][2];
        }

        forn(i,0,n)
        {
            cin>>pcl[i][0]>>pcl[i][1]>>pcl[i][2];
        }

        forn(i,0,n)
        {
            vc.pb(pl(pcl[i][0],pll(i,0)));
            vc.pb(pl(pcl[i][1],pll(i,1)));
            vc.pb(pl(pcl[i][2],pll(i,2)));

        }

        sort(vc.rbegin(),vc.rend());

        forn(i,0,vc.size())
        {
            printf("pl---  %lld  i--  %lld tm--  %lld\n",vc[i].first, vc[i].second.first,times[vc[i].second.first][vc[i].second.second]);
        }
        /*
        mll mp;
        ll ans = 0;
        ll tm = 0;
        ll kcnt = 0;
        ll cnt = 0;

        forn(i,0,vc.size())
        {
            if(tm+times[vc[i].second.first][vc[i].second.second]<= m && ((mp[vc[i].second.first]!=0 && kcnt+1<k) || mp[vc[i].second.first]==0))
            {
                ans+=vc[i].first;
                if(mp[vc[i].second.first]!=0)
                  kcnt++;
                mp[vc[i].second.first]++;
                cnt++;
                tm+=times[vc[i].second.first][vc[i].second.second];
                printf("---- pl---  %lld  i--  %lld tm--  %lld\n",vc[i].first, vc[i].second.first,times[vc[i].second.first][vc[i].second.second]);
            }
            if(cnt==n)
                break;
        }
        
        */
        memset(dp,-1,sizeof dp);
        ll ans = solve(0,0,0);

        cout<<ans<<el;



    }


    return 0;
}

/*


1
4 2 7
6 1 1
10 7 2
10 5 10
3 10 10
3 4 5
4 5 7
9 8 1
10 2 2


1
4 2 7
6 1 1
10 7 2
10 4 10
3 10 10
3 4 5
4 5 7
9 8 1
10 2 2


*/


