

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
typedef    unordered_map<ll,ll>mll;
typedef    vector<ll>vl;
typedef    vector<pll>vll;
typedef    vector<pl>vlp;
typedef    set<ll>sl;
typedef    multiset<ll>msl;
typedef    priority_queue<ll>prl;

const ll mod=1000000007;

ll dp[101][10001];

class Solution {
public:
    string S,T;
    ll lcs(ll i,ll j)
    {
        if(i==S.size() || j==T.size())
            return 0;

        if(dp[i][j]!=-1)
            return dp[i][j];
        ll ans = 0;

        if(S[i]==T[j])
            ans = 1+ lcs(i+1,j+1);
        else
        {
            ans = max(lcs(i+1,j),lcs(i,j+1));
        }

        dp[i][j]=ans;

        return dp[i][j];
    }
    bool isSubsequence(string s, string t) {
        S= s;
        T= t;

        if(s.size()==0)
            return true;
        if(t.size()==0)
            return false;

        memset(dp,-1,sizeof dp);

        ll r = lcs(0,0);

        if(r==min(s.size(),t.size()))
            return true;
        else
            return false;


    }
};


int main()
{

    fio
    Solution obj;
    int n;
    int ans;
    vl vc;
    string s,t;

    cin>>s>>t;

    ans = obj.isSubsequence(s,t);


    cout<<ans<<el;








    return 0;
}






