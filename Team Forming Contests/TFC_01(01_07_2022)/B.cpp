
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


//  SEGMENT TREE
ll tree[4*sz],lazy[4*sz],ar[sz];
void build(ll node,ll l,ll r)
{
    if(l==r)
    {
        tree[node]=ar[l-1];
        return;
    }
    ll mid = (l+r)/2;
    build(2*node,l,mid);
    build(2*node+1,mid+1,r);
    tree[node]=tree[2*node]+tree[2*node+1];
}
void updateP(ll node,ll l, ll r, ll x, ll val)
{
    if(l>x || r<x)		return;
    if(l==r)
    {
        tree[node]=val;
        return;
    }
    ll mid= (l+r)/2;
    updateP(2*node,l,mid,x,val);
    updateP(2*node+1,mid+1,r,x,val);
    tree[node]=tree[2*node]+tree[2*node+1];
}
void updateL(ll node,ll l,ll r,ll i,ll j,ll val )
{
    if(l>j|| r<i)		return;
    if(l==r)
    {
        tree[node]+=(r-l+1)*val;
        lazy[node]+=val;
        return;
    }
    ll mid= (l+r)/2;
    updateL(2*node,l,mid,i,j,val);
    updateL(2*node+1,mid+1,r,i,j,val);
    tree[node]=tree[2*node]+tree[2*node+1]+(r-l+1)*lazy[node];
}
ll querryP(ll node,ll l,ll r, ll i,ll j)
{
    if(l>j || r<i)		return 0;
    if(l>=i && r<=j)		return tree[node];
    ll mid=(l+r)/2, ans1=0,ans2=0;
    ans1=querryP(2*node,l,mid,i,j);
    ans2=querryP(2*node+1,mid+1,r,i,j);
    return ans1+ans2;
}
ll querryL(ll node,ll l, ll r,ll i,ll j,ll carry=0)
{
    if(l>j || r<i)return 0;
    if(l>=i && r<=j)return tree[node]+carry*(r-l+1);
    ll mid=(l+r)/2, ans1=0,ans2=0;
    ans1=querryL(2*node,l,mid,i,j,carry+lazy[node]);
    ans2=querryL(2*node+1,mid+1,i,j,carry+lazy[node]);
    return ans1+ans2;
}





int main()
{

    fio

    ll t,i,j,n,m,k,a,b,c=0,tc=1,bug1=1;

    //tst
    {
    
    cin>>n>>m;
    
    build(1,1,n);
    
    while(m--)
    {
    	cin>>a>>b;
        
        updateL();
    
    }
    
    cin>>k;
    while(k--)
    {
    	cin>>a;
    	
    	ll x= querryL();
    	
    	
    	cout<<x<<el;
    }
    	
    	


    }


    return 0;
}



