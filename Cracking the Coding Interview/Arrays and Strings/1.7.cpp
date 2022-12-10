#include<iostream>
using namespace std;


void RotateMat(string s[], int n)
{
	string str[n];
	for(int i = 0;i<n;i++)
		str[i]="";

	int r = n-1;

	while(r>=0)
	{
		for(int i = 0;i<n;i++)
		{
			str[i]+=s[r][i];
		}
		r--;
	}

	for(int i = 0;i<n;i++)
	{
		for(int j = 0;j<n;j++)
		{
			s[i][j]=str[i][j];
		}
	}


}

int main()
{
	int n;

	cin>>n;

	string s[n];

	for(int i =0;i<n;i++)
		cin>>s[i];


	RotateMat(s,n);


	for(int i = 0;i<n;i++)
		cout<<s[i]<<endl;
}



