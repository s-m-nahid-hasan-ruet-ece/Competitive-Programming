#include<iostream>

using namespace std;

string URLify(string s)
{
	int cnt = 0, r = s.size()-1, R;
	
	while(s[r]==' ')
		r--;
	
	for(int i = 0;i<=r;i++)
	{
		if(s[i]==' ')
			cnt++;
	}	
	
	R = r + 2*cnt;
	
	
	while(r<R)
	{
		if(s[r]!=' ')
		{
			s[R]=s[r];
			R--;
			r--;
		}
		else
		{
			s[R]='0';
			s[R-1]='2';
			s[R-2]='%';
			r--;
			R-=3;
		}
	}
	
	return s;
	
}

int main()
{
	int n;
	string s;

    getline(cin,s);
	cin>>n;
	
	string str = URLify(s);
	
	cout<<str<<endl;
	
	
	
	
}