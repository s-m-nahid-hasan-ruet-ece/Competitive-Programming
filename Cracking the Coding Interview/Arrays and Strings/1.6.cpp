#include<iostream>
#include<algorithm>
using namespace std;

string StrCompression(string s)
{
	string ss = "";

	for(int i = 0;i<s.size();i++)
	{
		char ch = s[i];
		i++;
		int cnt = 1;
		while(i<s.size() && ch==s[i])
			{
				i++;
				cnt++;
			}
		ss+=ch;
		string sss = "";
		if(cnt==1)
            cnt = 0;
		while(cnt>0)
		{
			int x = cnt%10;
			cnt/=10;
			sss+=x+'0';
		}

		reverse(sss.begin(),sss.end());
		ss+=sss;
		i--;
	}

	if(ss.size()==s.size())
		return s;
	else
		return ss;
}

int main()
{
	string s;
	cin>>s;

	string str = StrCompression(s);

	cout<<str<<endl;
}
