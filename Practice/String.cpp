#include <bits/stdc++.h>
#include <algorithm>
#include <string>
using namespace std;

int main()
{
	string a,c,d,e,f;
	string b(3,'x');
	getline(cin,a); // to input a sentence
	cout<<a<<b<<endl;

	cin>>c>>d;
	cout<<c+d<<endl; // adding up words
	cout<<c.append(d)<<endl;
	cout<<c[2]<<endl; // 3rd character in string
	c.clear();  // clear the string variable
	cout<<c<<endl;

	cin>>e>>f;
	cout<<e.compare(f)<<endl; // to compare 2 strings , if +ve e is bigger
	e.erase(1,2);
	cout<<e<<endl; // to erase a group of characters
	cout<<e.find("org")<<endl; // to find a particular thing

	e.insert(2,"lol"); // to insert something at some particular index
	cout<<e<<endl;
	cout<<e.size()<<endl;
	cout<<e.length()<<endl;
	cout<<e.substr(1,5)<<endl; // to get a substring out of whole string
	sort(e.begin(),e.end());
	cout<<e<<endl; // sort in ascending order

	string g="6";
	int x=stoi(g);
	cout<<x+9<<endl;
	cout<<to_string(x)+"9"<<endl;

	string str="makeyourwayup";
	for(int i=0;i<str.size();i++)
	{
		if(str[i]>='a'|| str[i]<='z')
		{
			str[i]-=32;
		}
	}
	cout<<str<<endl;
	for(int i=0;i<str.size();i++)
	{
		if(str[i]>='A' && str[i]<='Z')
		{
			str[i]+=32;
		}
	}
	cout<<str<<endl;
	transform(str.begin(), str.end(), str.begin(), ::toupper);
	cout<<str<<endl;
	transform(str.begin(), str.end(), str.begin(), ::tolower);
	cout<<str<<endl;

	string w="94039482";  // maximum number formation
	sort(w.begin(),w.end(),greater<int>());
	cout<<w<<endl;

	string u="kscuuicieskcf";
	int freq[26]={0};

	for(int i=0;i<u.length();i++)
	{
		freq[u[i]-'a']++;
	}

	char ans='a';
	int maxFreq=0;
	for(int i=0;i<26;i++)
	{
		if(freq[i]>maxFreq)
		{
			maxFreq=freq[i];
			ans=i+'a';
		}
	}
	cout<<maxFreq<<" "<<ans<<endl;

	return 0;
}