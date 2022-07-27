

/*
     Author's Handle : Crazy_Dreamer
     Author's Name   : S M Nahid Hasan
*/

#include<bits/stdc++.h>
using namespace std;

#define ll               int
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


typedef    vector<ll>vl;
typedef    vector<vl>vvl;
typedef    pair<ll,ll>pll;
typedef    pair<ll,pll>pl;
typedef    unordered_map<ll,ll>mll;
typedef    unordered_map<ll,vl>mlv;
typedef    vector<pll>vll;
typedef    vector<pl>vlp;
typedef    set<ll>sl;
typedef    multiset<ll>msl;
typedef    priority_queue<ll>prl;

const ll mod=1000000007;


class Solution
{
public:
    ll n,m;
    vvl grids;
    ll vis[510][510];
    ll x[4]= {1,-1,0,0};
    ll y[4]= {0,0,-1,1};

    void init()
    {
        memset(vis,0,sizeof vis);
    }

    ll bfs(pll s)
    {
        ll cnt =1;
        vis[s.first][s.second]=1;
        queue<pll>q;
        q.push(s);

        while(!q.empty())
        {
            pll u,v;

            u = q.front();
            q.pop();

            forn(i,0,4)
            {
                ll xx = u.first+x[i];
                ll yy = u.second+y[i];

                if(xx>=0 && xx<n && yy>=0 && yy<m && vis[xx][yy]==0 && grids[xx][yy]==1)
                {
                    cnt++;
                    vis[xx][yy]=1;
                    q.push(pll(xx,yy));
                }
            }

        }

        return cnt;

    }
    int numEnclaves(vector<vector<int>>& grid)
    {

        ll cntL= 0;
        vll s;
        n = grid.size();
        m = grid[0].size();

        printf("n: %lld  m: %lld\n",n,m);

        grids = grid;
        init();

        forn(i,0,n)
        {
            forn(j,0,m)
            {
                printf("%lld ",grid[i][j]);
                if(grid[i][j]==1)
                    cntL++;
                if(grid[i][j]==1 && (i==0 || i==n-1 || j==0 || j==m-1))
                {
                    s.pb(pll(i,j));
                }
            }
            cout<<el;
        }

        ll r= 0;

        forn(i,0,s.size())
        {
            if(vis[s[i].first][s[i].second]==0)
                r+= bfs(s[i]);
        }

        cout<<"1s: "<<cntL<<el;

        return (cntL-r);

    }
};


int main()
{

    fio
    Solution obj;
    int n,t,x,m;
    ll ans;
    vvl vc;

    cin>>n>>m;


    forn(i,0,n)
    {
        vl vc1;
        forn(j,0,m)
        {
            cin>>x;
            vc1.pb(x);
        }
        vc.pb(vc1);

    }


    forn(i,0,n)
    {
        forn(j,0,m)
        {
            cout<<vc[i][j]<<" ";
        }
        cout<<el;

    }



    ans = obj.numEnclaves(vc);

    cout<<ans<<el;










    return 0;
}








