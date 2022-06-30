#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define ull unsigned long long int
#define Max 1000005
#define _fastio  ios_base:: sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ALL(x) x.begin(),x.end()
#define pi acos(-1.0)
#define pb push_back
#define load(array,size)  for(ll i=0 ; i<size ; i++) cin>>array[i] ;
#define endl 'n'

#define sc(n) scanf("%d",&n)
#define scan(n) scanf("%lld",&n)
/*        speed up       */
#pragma GCC target ("avx2")
#pragma GCC optimization ("O3")
#pragma GCC optimization ("unroll-loops")
#define sci(n) scanf("%d",&n);
#define scl(n) scanf("%lld",&n);
#define load1(array,size)  for(ll i=1 ; i<=size ; i++) cin>>array[i] ;
#define INF    1LL<<19
#define pll pair<ll,ll>
#define mst(arr,value) memset(arr,value,sizeof(arr));
#define tst() _fastio;int testsalam;cin >> testsalam;while(testsalam--)
#define Mod 100000007
#define YES cout<<"Yes"<<endl;
#define NO cout<<"No"<<endl;
#define fi first
#define se second

struct HASH{
size_t operator()(const pair<int,int>&x)const{
return hash<long long>()(((long long)x.first)^(((long long)x.second)<<32));
}
};


//void inversemod(ll n, ll mod, ll invmod[],ll MOD){for(int i=2; i<=n; ++i) invmod[i]=MOD-MOD/i*invmod[MOD%i]%MOD;}
//void bigmod( ll a, ll b ,ll mod){ll r = 1;a = a%mod;while(b){if( b%2 ) r = (r*a)%mod;b = b/2;a = (a*a)%mod; }return (ll)r;}
string inttostr(ll n){std::stringstream ss;ss << n;string out=ss.str();return out;}
ll stringtoint(string s){istringstream iss (s);ll n;iss >> n;return n;}
template <typename T> T gcd(T a,T b){if(a < 0)return gcd(-a,b);if(b < 0)return gcd(a,-b);return (b == 0)?a:gcd(b,a%b);}
template <typename T> T lcm(T a,T b) {if(a < 0)return lcm(-a,b);if(b < 0)return lcm(a,-b);return a*(b/gcd(a,b));}
typedef vector<ll>vec;
typedef pair<ll,ll> pii;
typedef map<ll,ll>mpll;
typedef set<ll>seet;
typedef tuple<ll,ll,ll>tpl;
typedef unordered_map<pair<int,int>,int,HASH>u_map;

int main()
{
  	cout<<"S M Nahid Hasan \n"<<"ID: 1710039\n";
	cout<<"Enter the Number of Process: ";

    int n;
    cin>> n;
    int AT[n+10],bt[n+10],ct[n+10],ta[n+10],wt[n+10];

    vector<pair<int,int>>processes;

    cout<<"Enter AT(Arrival Time) and BT(Burst Time) of the processes:\n";
    for (int i = 0; i < n; ++i)
    {
        int a,b;
        cin>> a>> b;
        processes.push_back({a,b});
    }
    int current_time=0;
    int Total_AT=0,Total_WT=0;
    for (int i = 0; i < n; ++i)
    {
        current_time+=processes[i].second;
        ct[i]=current_time;
        ta[i]=ct[i]-processes[i].first;
        wt[i]=ta[i]-processes[i].second;
        Total_AT+=ta[i];
        Total_WT+=wt[i];
    }
    cout<<"PId    |AT    |BT    |CT      |  TA         |WT\n";
    for (int i = 0; i < n; ++i)
    {
        cout<<i+1<<"        "<<processes[i].first<<"      "<<processes[i].second<<"      "<<ct[i]<<"         "<<ta[i]<<"          "<<wt[i]<<"\n";
    }

    cout<<"Average Turn-Around time: "<<Total_AT/n<<"\n";
    cout<<"Average Wating Time: "<<Total_WT/n<<"\n";
}
/*
    remember:
    ll vs int
    array size
    case for 1 2 3
*/

