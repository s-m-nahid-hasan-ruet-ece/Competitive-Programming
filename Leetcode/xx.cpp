
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

int main()
{

    fio

    ll t,i,j,n,m,k,a,b,c=0,tc=1,bug1=1;

  // tst
    {

    	cin>>n;

    	ll ar[n+5];

    	forn(i,0,n)
    	cin>>ar[i];

    	mll cnt1,cnt2;
    	ll mx1=0,mx2=0;

    	forn(i,0,n)
    	{
    		if(i%2==1)
    		{
    			cnt1[ar[i]]++;
    		    mx1 = max(mx1,cnt1[ar[i]]);
    	    }
    	    else
    	    {
    			cnt2[ar[i]]++;
    		    mx2 = max(mx2,cnt2[ar[i]]);
    	    }

       }


       vll vc1,vc2;

       for(auto I = cnt1.begin();I!=cnt1.end();I++)
       {
          vc1.pb(pll(I->second,I->first));
       }

       for(auto I = cnt2.begin();I!=cnt2.end();I++)
       {
          vc2.pb(pll(I->second,I->first));
       }

       sort(vc1.rbegin(),vc1.rend());

       sort(vc2.rbegin(),vc2.rend());

       ll cnt = 0;
/*
       forn(i,0,vc1.size())
       {
           cout<<vc1[i].first<<" "<<vc1[i].second<<el;
       }
       cout<<el<<el;
       forn(i,0,vc2.size())
       {
           cout<<vc2[i].first<<" "<<vc2[i].second<<el;
       }
       cout<<el;
*/
       if(vc1[0].second==vc2[0].second)
       {
           if(vc1[0].first>=vc2[0].first && vc2.size()>1)
           {
               cnt+= (n/2) - vc1[0].first;
               cnt+= (n/2) - vc2[1].first;
           }
           else if(vc1[0].first<vc2[0].first && vc1.size()>1)
           {
               cnt+= (n/2) - vc1[1].first;
               cnt+= (n/2) - vc2[0].first;
           }
       }
       else
       {
               cnt+= (n/2) - vc1[0].first;
               cnt+= (n/2) - vc2[0].first;

       }

       if(cnt==0 && ar[0]==ar[1])
       	cnt=n/2;

       cout<<cnt<<el;







    }


    return 0;
}

/*

10
1 2 1 1 1 1 1 2 1 2

10
1 2 1 1 1 1 1 2 1 1
*/


