
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
typedef    set<pll>sl;
typedef    multiset<ll>msl;
typedef    priority_queue<ll>prl;

const ll mod=1000000007;

int main()
{

    fio

    ll t,i,j,n,m,k,a,b,c=0,tc=1,bug1=1;

    ll num_of_process;

	cout<<"S M Nahid Hasan"<<endl<<"ID: 1710039"<<endl;
	cout<<"Enter the Number of Process: ";
	cin>>num_of_process;

	vll processes;
	sl st;
	mll mp;
	ll at[num_of_process], bt[num_of_process];
	ll wt[num_of_process], ct[num_of_process], ta[num_of_process];

	cout<<"Enter AT(Arrival Time) and BT(Burst Time) of the processes:"<<endl;

	for(ll i = 0;i<num_of_process;i++)
	{
		int x, y;
		cin>>x>>y;
		processes.pb(pll(x,i));
		at[i]=x;
		bt[i]=y;
	}
	sort(processes.begin(),processes.end());

	ll current_time= 0;
	i = 0;

	st.insert(pll(bt[processes[0].second], processes[0].second));

	while(!st.empty())
	{
		auto I = st.begin();
		pll x = *I;
		ll time_needed = x.first;
		st.erase(x);

		printf("process -%d   time_needed---  %lld  \n",x.second+1, time_needed );



       	if(i+1<num_of_process && current_time+time_needed>processes[i+1].first)
       	{
       		printf("f1\n");
       		ll ind = processes[i+1].second;

       		time_needed-= processes[i+1].first - current_time;
       		current_time+= processes[i+1].first - current_time;
       		//if(time_needed>bt[ind])
       		//	{
       				st.insert(pll(time_needed,x.second));
       				st.insert(pll(bt[ind],ind));
       		//	}

       	}
       	else if(i+1<num_of_process && current_time+time_needed<=processes[i+1].first)
       	{
       		printf("f2\n");
       		 ll ind = processes[i+1].second;
       		 st.insert(pll(bt[ind],ind));
 	         i++;
       	}


	}





    return 0;
}




