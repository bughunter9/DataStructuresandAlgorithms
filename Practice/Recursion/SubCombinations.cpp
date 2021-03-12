#include <bits/stdc++.h>
using namespace std;


void subcomb(string s,string ans)
{
	if(s.length()==0)
	{
		cout<<ans<<endl;
		return;
	}
	char b=s[0];
	string str=s.substr(1);
	subcomb(str,ans);
	subcomb(str,ans+b);

}

void subasci(string s,string ans)
{
	if(s.length()==0)
	{
		cout<<ans<<endl;
		return;
	}
	char b=s[0];
	int num=b;
	string str=s.substr(1);

	subasci(str,ans);
	subasci(str,ans+b);
	subasci(str,ans+to_string(num));

}

int main()
{
	subcomb("man","");
	// subasci("man","");
	return 0;
}