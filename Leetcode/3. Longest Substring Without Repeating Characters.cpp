

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
typedef    vector<pll>vll;
typedef    vector<pl>vlp;
typedef    set<ll>sl;
typedef    multiset<ll>msl;
typedef    priority_queue<ll>prl;

const ll mod=1000000007;



class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        ll ans = 0, l= 0,r= 1;

        if(s.size()==1)
            return 1;

        mll mp;
        mp[s[l]]++;
      // mp[s[r]]++;
        while(r<s.size())
        {
            mp[s[r]]++;
            if(mp[s[r]]==2)
            {
                while(l<=r && mp[s[r]]==2)
                {
                    mp[s[l]]--;
                    l++;
                }

            }

            ans =max(ans,r-l+1);
            printf("l--  %lld  r--  %lld\n",l,r);
            r++;
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
    string s = " ";
   // cin>>s;

    ans = obj.lengthOfLongestSubstring(s);

    cout<<ans<<el;


    return 0;
}





