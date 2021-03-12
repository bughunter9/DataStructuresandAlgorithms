#include <bits/stdc++.h>
using namespace std;

string duplicate(string s)
{
	if(s.length()==0)
		return "";

	char a=s[0];
	string ans=duplicate(s.substr(1));
	if(a==ans[0])
	{
		return ans;
	}
	else
	{
		return (a+ans);
	}

}

int main()
{
	string s="aaabbbejjjjjkkk";
	cout<<duplicate(s)<<endl;
	return 0;
}