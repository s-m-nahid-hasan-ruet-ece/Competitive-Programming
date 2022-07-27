

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



class Solution {
public:
    int getMaximumGenerated(int n) {

        ll ans = 0,cnt= 0;
        ll ar[n+10];

        if(n<2)
            return n;

        ar[0]=0;
        ar[1]=1;
        cnt= 2;

        for(ll i=1;i<n+2;i+=1)
        {

            ar[i*2] = ar[i];
            cnt++;
            ans=  max(ans, ar[i*2]);

            if(cnt==n+1)
            break;

            ar[i*2+1]= ar[i]+ar[i+1];
            cnt++;
            ans = max(ans,ar[i*2+1]);
            if(cnt==n+1)
                break;
        }

        return ans;
    }
};



int main()
{

    fio
    Solution obj;
    int n;
    int ans;
    vl vc;

    cin>>n;

    ans = obj.getMaximumGenerated(n);


    cout<<ans<<el;








    return 0;
}






