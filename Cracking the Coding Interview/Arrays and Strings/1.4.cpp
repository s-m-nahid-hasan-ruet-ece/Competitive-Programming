#include<iostream>
#include<map>
using namespace std;


bool CheckPalPer(string s)
{
	map<char,int>charMap;

	for(int i = 0;i<s.size();i++)
		{
		    if(s[i]>='A' && s[i]<='Z')
                s[i]= (char)((s[i]-'A') + 'a');

		    charMap[s[i]]++;
		}
	int cnt = 0;
	for(auto I = charMap.begin(); I!=charMap.end();I++)
	{
		char ch = I->first;
		int x = I->second;

		if(ch != ' ')
		{
			if(x%2==1)
				cnt++;
		}
	}
	if(cnt>1)
		return false;
	else
	    return true;
}

int main()
{
	string s;

	getline(cin,s);

	bool r= CheckPalPer(s);

	cout<<r<<endl;
}
