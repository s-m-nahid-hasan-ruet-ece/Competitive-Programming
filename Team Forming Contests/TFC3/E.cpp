
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
typedef    pair<pll,ll>pl;
typedef    unordered_map<ll,ll>mll;
typedef    vector<ll>vl;
typedef    vector<pll>vll;
typedef    vector<pl>vlp;
typedef    set<ll>sl;
typedef    multiset<ll>msl;
typedef    priority_queue<ll>prl;

const ll mod=1000000007;

bool cmp(pl &a, pl &b)
{
	if(a.first.first<b.first.first)
		return 1;
	else if(a.first.first== b.first.first && a.first.second>b.first.second)
	{
		return 1;
	}
	else
		return 0;

}


int main()
{

    fio

    ll t,i,j,n,m,k,a,b,c=0,tc=1,bug1=1;

    //tst
    {

    	cin>>n>>m;

    	vlp vc;

    	forn(i,0,m)
    	{
    		cin>>a>>b;
    		vc.pb(pl(pll(a,b),i+1));
    	}

    	sort(vc.begin(),vc.end(),cmp);

    	//forn(i,0,vc.size())
    	//cout<<vc[i].first.first<<" == "<<vc[i].first.second<<el;


        vl ans;
        ll last =-1,cnt=0;
    	forn(i,0,vc.size())
          {
             if(i==0)
             {
                last= vc[i].first.first+vc[i].first.second-1;
             }
             else
             {
                 if(last>= vc[i].first.first+vc[i].first.second-1)
                    {
                        cnt++;
                        ans.pb(vc[i].second);
                    }
                 else
                    last= vc[i].first.first+vc[i].first.second-1;
             }
          }

          cout<<cnt<<el;
          sort(ans.begin(),ans.end());
          forn(i,0,ans.size())
          cout<<ans[i]<<" ";
          cout<<el;


    }


    return 0;
}

/*

10 4
3 3
3 1
6 1
9 2


10 4
3 3
3 1
5 1
9 2


10 6
3 3
4 3
5 2
9 2
3 4
1 10




*/

