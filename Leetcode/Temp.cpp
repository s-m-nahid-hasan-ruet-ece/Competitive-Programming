
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
typedef    pair<double,ll>pld;
typedef    pair<ll,pll>pl;
typedef    map<pll,ll>mll;
typedef    vector<ll>vl;
typedef    vector<pld>vld;
typedef    vector<pll>vll;
typedef    vector<pl>vlp;
typedef    set<pld>sld;
typedef    multiset<ll>msl;
typedef    priority_queue<ll>prl;

const ll mod=1000000007;

int main()
{

    fio

    ll t,i,j,n,m,k,a,b,c=0,tc=1,bug1=1;

    printf("Enter the size of training dataset:\n");
    cin>>n;

    vll points;
    mll classes;

    printf("\nEnter the training dataset:\n<x-value> <y-value> <class(1/-1)>\n");
    forn(i,0,n)
    {
    	ll x,y,val;
    	cin>>x>>y>>val;

    	points.pb(pll(x,y));
    	classes[pll(x,y)]=val;
    }

    printf("Enter the value of K:\n");
    cin>>k;

    printf("\n\nREADY TO TEST DATA\n\n\n");
    printf("Enter -1 to terminate:\n");
    printf("Enter the point to be classified:\n<x-value> <y-value>:\n");
    while(1)
    {


        ll xx,yy;
        cin>>xx;

        if(xx==-1)
        	break;
        cin>>yy;

        if(classes[pll(xx,yy)]!=0)
        {
        	printf("Class of (%lld,%lld) : %lld\n", xx,yy,classes[pll(xx,yy)]);
        	continue;
        }

        ///vld distances;
        sld distances;

        forn(i,0,n)
        {
            double d = sqrt((xx-points[i].first)*(xx-points[i].first)+(yy-points[i].second)*(yy-points[i].second));
            /// distances.pb(pld(d,i));
            distances.insert(pld(d,i));
        }

        /// sort(distances.begin(),distances.end());

        ll cntN=0,cntP=0,cntK=0;
/**
        forn(i,0,k)
        {
        	ll ind = distances[i].second;
        	if(classes[points[ind]]==1)
        		cntP++;
        	else if(classes[points[ind]]==-1)
        	    cntN++;
        }
**/

        for(auto I = distances.begin();I!=distances.end();I++)
        {
            pld distance = *I;
            ll ind = distance.second;

        	if(classes[points[ind]]==1)
        		cntP++;
        	else if(classes[points[ind]]==-1)
        	    cntN++;

            cntK++;
            if(cntK==k)
                break;
        }

        if(cntP>cntN)
        {
        	printf("Class of (%lld,%lld) : 1\n", xx,yy);
        	classes[pll(xx,yy)]=1;
        }
        else
        {
        	printf("Class of (%lld,%lld) : -1\n", xx,yy);
        	classes[pll(xx,yy)]=-1;
        }

    }

    return 0;
}

/*

10
1 2 1
2 6 1
3 7 1
1 5 1
4 8 1
8 4 -1
6 3 -1
10 6 -1
5 2 -1
7 4 -1
3
1 6
6 9
9 6
10 2


*/



