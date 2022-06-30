#include<bits/stdc++.h>
using namespace std;
int main()
{
    cout<<"Enter the total number of processes:"<<endl;
    int n;
    cin>>n;
    int P[n],at[n],bt[n],rt[n],period,wt=0,tat=0;
    cout<< "Enter arrival time burst time for all processes"<<endl;
    cout<<"P At Bt"<<endl;
    for ( int i=0;i<n;i++)
    {
        cin>>P[i]>>at[i]>>bt[i];
        rt[i]=bt[i];
    }
    cout<<"Enter the value of time quantam"<<endl;
    cin>>period;
    queue<int>q;
    bool process[n];
    memset(process,false,sizeof(process));
    for(int i=0;i<n;i++)
    {
        if(process[i])
            continue;
        int j=1, time=at[i];
        q.push(i);
        while(q.size())
        {
            int i=q.front();
            q.pop();
            cout<<i+1<<" ";
            if(rt[i]<=period && bt[i]>0)
            {
                time+=rt[i];
                rt[i]=0;
            }
            else if(bt[i]>0)
            {
                rt[i]-=period;
                time+=period;
            }
            if(rt[i]==0)
            {
                wt+=(time-at[i]-bt[i]);
                tat+=time-at[i];
                process[i]=1;
            }
            while(j<n && at[j]<=time)
            {
                q.push(j);
                j++;
            }
            if(rt[i])
            {
                q.push(i);
            }
        }
    }
    cout<<endl;
    cout<<"Average waiting time: "<<wt*1.0/n<<endl;
    cout<<"Average turn around time: "<<tat*1.0/n<<endl;
}
