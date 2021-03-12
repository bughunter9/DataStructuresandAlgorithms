#include <bits/stdc++.h>
using namespace std;

string moveAll(string s)
{
	if(s.length()==0)
	{
		return "";
	}
	char store=s[0];
	string ans=moveAll(s.substr(1));

	if(store=='x')
	{
		return ans+store;
	}
	else
	{
		return store+ans;
	}
}


int main()
{
	cout<<moveAll("kdkienxxkdiexoxxpoe")<<endl;
	return 0;
}