

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
typedef    vector<string>vl;
typedef    vector<pll>vll;
typedef    vector<pl>vlp;
typedef    set<ll>sl;
typedef    multiset<ll>msl;
typedef    priority_queue<ll>prl;

const ll mod=1000000007;

/*
class Solution {
public:
    bool isPowerOfTwo(int n) {
        ll cnt = 0;
        if(n<0)
            return 0;

        while(n)
        {
            if(n&1)
                cnt++;
            n=n>>1;
        }

        if(cnt==1)
            return 1;
        else
            return 0;
    }

};
*/
// Follow up of solving O(1)
class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n<=0)
            return 0;

        if(4294967296%n==0)
            return 1;
        else
            return 0;
    }


};



int main()
{

    fio
    Solution obj;
    int n;
    bool ans;
    cin>>n;

    ans=  obj.isPowerOfTwo(n);

    cout<<ans<<el;


    return 0;
}






