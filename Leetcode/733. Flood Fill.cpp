

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
typedef    unordered_map<char,ll>mll;
typedef    vector<ll>vl;
typedef    vector<vl>vvl;
typedef    vector<pl>vlp;
typedef    set<ll>sl;
typedef    multiset<ll>msl;
typedef    priority_queue<ll>prl;

const ll mod=1000000007;


class Solution {
public:

    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        ll n,m;
        ll x[] ={1,-1,0,0};
        ll y[] ={0,0,-1,1};

        n = image.size();
        m = image[0].size();

        ll startingCol = image[sr][sc];

        image[sr][sc]=color;
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

                if(xx>=0 && xx<n && yy>=0 && yy<m && image[xx][yy]==startingCol && image[xx][yy]!=color)
                {
                    image[xx][yy] = color;
                    q.push(pll(xx,yy));
                }
            }
        }

        return image;


    }
};


int main()
{

    fio
    Solution obj;
    int n,m,sr,sc,col;
    vvl ans,vc;

    cin>>n>>m>>sr>>sc>>col;

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


    ans=  obj.floodFill(vc,sr,sc,col);

    forn(i,0,n)
    {
        forn(j,0,m)
        {
            cout<<ans[i][j]<<" ";
        }
        cout<<el;
    }


    return 0;
}

/*

3 3 1 1 2
1 1 1
1 1 0
1 0 1


2 3 0 0 0
0 0 0
0 0 0

3 3 1 1 2
1 1 1
1 1 0
1 1 1

2 3 1 1 2
0 0 0
0 1 0



*/






