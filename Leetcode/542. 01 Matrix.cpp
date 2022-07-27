

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
     mll dis;
     vvl grids,ans;
     ll x[4] ={1,-1,0,0};
     ll y[4] ={0,0,-1,1};

     void bfs(ll sr,ll sc)
     {
        ans[sr][sc] = grids[sr][sc];
        dis[pll(sr,sc)]=0;
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

                if(xx>=0 && xx<n && yy>=0 && yy<m && dis[pll(xx,yy)]==-1)
                {
                    q.push(pll(xx,yy));
                    if(grids[xx][yy]==1)
                      {
                          dis[pll(xx,yy)] = dis[u]+1;
                          ans[xx][yy] = dis[pll(xx,yy)];
                      }
                    else
                      {
                          dis[pll(xx,yy)] = 0;
                          ans[xx][yy]  = 0;
                      }
                }
            }
        }

        //return cnt;
     }

     vector<vector<int>> updateMatrix(vector<vector<int>>& mat){
        n = mat.size();
        m = mat[0].size();

        grids = mat;
        pll s = pll(-1,-1);
        ans = mat;

        forn(i,0,n)
        {
            forn(j,0,m)
            {
                ans[i][j] = 0;
                dis[pll(i,j)]=-1;
                if(mat[i][j]==0)
                {
                    s = pll(i,j);
                }
            }
        }

        bfs(s.first,s.second);
        return ans;
    }
};


int main()
{

    fio
    Solution obj;
    int n,m,sr,sc,col;
    vvl vc;
    vvl ans;

    cin>>n>>m;

    forn(i,0,n)
    {
        vl vcc;
        forn(j,0,m)
        {
            ll x;

            cin>>x;
            vcc.pb(x);
            //vc[i].pb(x);
        }

        vc.pb(vcc);
    }

    forn(i,0,n)
    {

        forn(j,0,m)
        {
            cout<<vc[i][j]<<" ";
        }
        cout<<el;

    }


    ans=  obj.updateMatrix(vc);

    forn(i,0,n)
    {
        forn(j,0,n)
        cout<<ans[i][j]<<" ";
        cout<<el;
    }


    return 0;
}

/*


*/








