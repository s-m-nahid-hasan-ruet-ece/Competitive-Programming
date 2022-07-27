

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



typedef    pair<ll,ll>pll;
typedef    pair<ll,pll>pl;
typedef    map<pll,ll>mll;
typedef    vector<ll>vl;
typedef    vector<vl>vvl;
typedef    vector<pl>vlp;
typedef    set<ll>sl;
typedef    multiset<ll>msl;
typedef    priority_queue<ll>prl;

const ll mod=1000000007;


class Solution {
public:
     ll n,m;
     mll vis;
     vvl grids;
     ll x[4] ={1,-1,0,0};
     ll y[4] ={0,0,-1,1};

     int bfs(ll sr,ll sc)
     {
        ll cnt = 1;
        vis[pll(sr,sc)]=1;
        queue<pll>q;
        q.push(pll(sr,sc));
        while(!q.empty())
        {
            pll u,v;

            u = q.front();
            q.pop();

            forn(i,0,4)
            {
                ll xx,yy;

                xx = u.first + x[i];
                yy = u.second + y[i];

                if(xx>=0 && xx<n && yy>=0 && yy<m && grids[xx][yy]==1 && vis[pll(xx,yy)]==0)
                {
                    vis[pll(xx,yy)]=1;
                    q.push(pll(xx,yy));
                    cnt++;
                }
            }
        }

        return cnt;
     }

     int maxAreaOfIsland(vector<vector<int>>& grid) {

        ll ans = 0;
        n = grid.size();
        m = grid[0].size();

        grids = grid;


        vlp vc;

        forn(i,0,n)
        {
            forn(j,0,m)
            {
                if(grid[i][j]==1 && vis[pll(i,j)]==0)
                    ans = max(ans,bfs(i,j));
            }
        }

        return ans;
    }
};


int main()
{

    fio
    Solution obj;
    int n,m,sr,sc,col;
    vvl vc;
    ll ans;

    cin>>n>>m;

    forn(i,0,n)
    {
        vl vcc;
        forn(j,0,m)
        {
            ll x;

            cin>>x;
            vcc.pb(x);
        }

        vc.pb(vcc);
    }


    ans=  obj.maxAreaOfIsland(vc);

    cout<<ans<<el;


    return 0;
}

/*


[0,0,1,0,0,0,0,1,0,0,0,0,0]
[0,0,0,0,0,0,0,1,1,1,0,0,0]
[0,1,1,0,1,0,0,0,0,0,0,0,0]
[0,1,0,0,1,1,0,0,1,0,1,0,0]
[0,1,0,0,1,1,0,0,1,1,1,0,0]
[0,0,0,0,0,0,0,0,0,0,1,0,0]
[0,0,0,0,0,0,0,1,1,1,0,0,0]
[0,0,0,0,0,0,0,1,1,0,0,0,0]

0 0 1 0 0 0 0 1 0 0 0 0 0
0 0 0 0 0 0 0 1 1 1 0 0 0
0 1 1 0 1 0 0 0 0 0 0 0 0
0 1 0 0 1 1 0 0 1 0 1 0 0


*/







