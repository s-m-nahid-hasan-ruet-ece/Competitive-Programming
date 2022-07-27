

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

class Solution {
public:
    bool checkInclusion(string s1, string s2) {

       if(s1.size()>s2.size())
        return 0;

       mll mp1,mp2;

       forn(i,0,s1.size())
       mp1[s1[i]]++;

       forn(i,0,s1.size())
       mp2[s2[i]]++;

       ll f= 0;
       forn(i,s1.size(),s2.size()+1)
       {
           ll f1 = 0;
           for(char ch = 'a';ch<='z';ch++)
           {
               if(mp1[ch]==mp2[ch])
                continue;
               else
               {
                   f1 =1 ;
                   break;
               }
           }
           if(f1==0)
           {
               f = 1;
               break;
           }

           if(i==s2.size())
            break;

           mp2[s2[i]]++;
           mp2[s2[i-s1.size()]]--;
       }

       return f;



    }
};





int main()
{

    fio
    Solution obj;
    int n;
    bool ans;
    string s1,s2 = " ";
     cin>>s1>>s2;

   ans=  obj.checkInclusion(s1,s2);

    cout<<ans<<el;


    return 0;
}






