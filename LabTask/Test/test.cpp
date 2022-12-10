#include<iostream>
#include<vector>

using namespace std;


int main()
{
	int n, m;

	cin>>n>>m;
	int ar[n][m];

	vector< pair<int,int> >inds;

	for(int i = 0 ;i<n;i++)
	{
		for(int j = 0;j<m;j++)
		{
			cin>>ar[i][j];
			if(ar[i][j]==0)
				inds.push_back(pair<int,int>(i,j));
		}
	}


	for(int i= 0;i<inds.size();i++)
	{
		int x = inds[i].first;
		int y = inds[i].second;
		int ind = x;
		while(ind>=0)
		{
			ar[ind][y]=0;
			ind--;
		}
		ind = x;
		while(ind<n)
		{
			ar[ind][y]=0;
			ind++;
		}

		ind = y;
		while(ind>=0)
		{
			ar[x][ind--]=0;
		}

		ind = y;

		while(ind<m)
		{
			ar[x][ind++]=0;
		}

	}

	for(int i= 0;i<n;i++)
	{
		for(int j= 0;j<m;j++)
			printf("%d ", ar[i][j]);

		printf("\n");
	}

}
