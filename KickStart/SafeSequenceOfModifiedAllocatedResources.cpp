
/*
     Author's Handle : Crazy_Dreamer
     Author's Name   : S M Nahid Hasan
*/

#include<bits/stdc++.h>
using namespace std;

#define sz               1005


typedef    unordered_map<int,int>mll;
typedef    vector<int>vl;


int maxMat[sz][sz], allocatedMat[sz][sz], available[sz],neededMat[sz][sz];

int main()
{



    int t,i,j,n,m;

    printf("Enter the number of processes:\n");
    cin>>n;

    printf("Enter the number of resources:\n");
    cin>>m;


    printf("Enter the maximum resources matrix:\n");
    for(int i = 0; i<n; i++)
    {
        for(int j= 0; j<m; j++)
        {
            cin>>maxMat[i][j];
        }
    }

    printf("Enter the allocated resources matrix:\n" );
    for(int i = 0; i<n; i++)
    {
        for(int j = 0; j<m; j++)
        {
            cin>>allocatedMat[i][j];
        }
    }

    printf("Enter the available resources matrix:\n");
    for(int i = 0; i<m; i++)
    {
        cin>>available[i];
    }

    int pId;
    printf("Enter the process to be modified:\n");
    cin>>pId;

    printf("Enter allocated resources of Modified Process:\n");
    for(int i =0; i<m; i++)
        cin>>allocatedMat[pId-1][i];

    n++;



    for(int i=0; i<n; i++)
    {
        for(int j = 0; j<m; j++)
        {
            neededMat[i][j]=  maxMat[i][j] - allocatedMat[i][j];
        }
    }


    vl safeSequence;
    mll markDone;

    while(1)
    {
        int cntDone= 0;
        for(int i=0; i<n; i++)
        {
            int cnt= 0;
            for(int j = 0; j<m; j++)
            {
                if(markDone[i]==0 && neededMat[i][j]<= available[j])
                {
                    cnt++;

                    if(cnt==m)
                    {
                        markDone[i] = 1;
                        cntDone++;
                        safeSequence.push_back(i);
                        for(int p=  0; p<m; p++)
                        {
                            available[p]+= maxMat[i][p];
                        }

                    }
                }
            }
        }
        if(cntDone==0)
            break;

    }


    vl vc;

    int isDeadlock= 0;

    for(int i = 0; i<n; i++)
    {
        if(markDone[i]==0)
        {
            isDeadlock= 1;
            vc.push_back(i);
        }
    }

    if(isDeadlock)
    {
        printf("Deadlock Processes: \n");
        for(int i = 0; i<vc.size(); i++)
            cout<<vc[i]+1<<" ";
        cout<<endl;
    }
    else
    {
        printf("No Deadlock Occured\n");

        printf("Safe Sequence: ");
        for(int i =0; i<safeSequence.size(); i++)
            cout<<safeSequence[i]+1<<" ";
        cout<<endl;

    }




    return 0;
}

/*
Case 1:
3
3
3 6 8
4 3 3
3 4 4
3 3 3
2 0 3
1 2 4
1 2 0
3
1 2 1

Case 2:
4
3
0 1 1
1 0 0
0 0 1
0 2 0
1 0 1
1 1 0
0 1 0
0 1 0
0 0 1
4
1 0 1

Case 3:
5
3
7 5 3
3 2 2
9 0 2
2 2 2
4 3 3
0 1 0
2 0 0
3 0 2
2 1 1
0 0 2
3 3 2
2
1 2 1


Case 4:
2
2
1 1
1 1
1 0
0 1
0 0
1
0 1
*/

