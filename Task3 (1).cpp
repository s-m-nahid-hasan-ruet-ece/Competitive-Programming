#include<bits/stdc++.h>
using namespace std;

#define el  endl
#define pb(x)  push_back(x)
#define ll long long


typedef pair<ll, ll>pl;
typedef pair<ll, pl>pll;
typedef vector<ll>vl;
typedef vector<pl>vpl;
typedef set<pl>spl;
typedef map<ll,ll>ml;



int main()
{
    ll n;

    cout<<"Author: S M Nahid Hasan"<<endl;
    cout<<"1710039"<<el;


    cout<<"Enter the number of process: ";
    cin>>n;

    vpl process;
    ml mp;
    ll AT[n+5],BT[n+5], PT[n+5], CT[n+5], WT[n+5], TA[n+5];

    cout<<"Enter AT, BT and Priority:"<<el;
    for(ll i = 0; i<n; i++)
    {
        ll  _at, _bt, _pt;
        cin>>_at>>_bt>>_pt;

        process.push_back(pl(_at,i));
        BT[i]=_bt;
        PT[i]=_pt;
        AT[i]=_at;
    }


    sort(process.begin(),process.end());


    spl st;
    ll current_time= 0;

    st.insert(pl(PT[process[0].second],process[0].second));

    while(!st.empty())
    {
        auto I = st.begin();
        pl x = *I;
        ll ind = x.second;
        st.erase(x);
        CT[ind]= current_time+ BT[ind];
        mp[ind] = 1;
        current_time = CT[ind];
        TA[ind] = CT[ind] - AT[ind];
        WT[ind] = TA[ind] - BT[ind];
        WT[ind] = max(WT[ind],0LL);

        ll cnt = 0;
        for(ll i = 0; i<n; i++)
        {
            if(mp[i]==0LL && AT[i]<current_time)
            {
                st.insert(pl(PT[i],i));
                cnt++;
            }
        }

        if(cnt==0)
        {
            cnt = 0;
            ll indx = -1, _at= INT_MAX;
            for(ll i = 0; i<n; i++)
            {
                if(mp[i]==0LL && _at>AT[i])
                {
                   _at = AT[i];
                   indx = i;
                    cnt++;
                }
            }
            if(cnt!=0)
            st.insert(pl(PT[indx],indx));

        }
    }

    double avg_ta =0, avg_wt = 0;


    for(int i =0; i<n; i++)
    {
        printf("process: %d\tat: %lld\tbt: %lld\tpt: %lld\tct: %lld\tta: %lld\twt: %lld\n",i+1, AT[i],BT[i], PT[i],CT[i],TA[i],WT[i]);
        avg_ta += TA[process[i].second];
        avg_wt += WT[process[i].second];
    }

    avg_ta =avg_ta*1.0/n;
    avg_wt =avg_wt*1.0/n;

    cout<<el<<"Average TA time: "<<avg_ta<<el;
    cout<<"Average WT time: "<<avg_wt<<el;






}

/*
Sample Inputs

5
2 4 2
10 2 1
5 4 3
9 3 4
8 3 1


7
0 3 2
2 5 6
1 4 3
4 2 5
6 9 7
5 4 4
7 10 10


*/
