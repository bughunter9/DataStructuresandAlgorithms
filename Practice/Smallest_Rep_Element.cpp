#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int a[n];
	for (int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	int maxe=INT_MAX;
	int N=1e6;
	int b[N];
	for(int i=0;i<N;i++)
	{
		b[i]=-1;
	}
	//  2  4  8  3  4 
	// -1 -1 -1 -1 -1 
	// -1 -1  2  3  4 

	for(int i=0;i<n;i++)
	{
		if(b[a[i]]!=-1)
		{
			maxe=min(maxe,b[a[i]]);
		}
		else
		{
			b[a[i]]=i;
		}
	}
	if(maxe==INT_MAX)
	{
		cout<<"-1"<<endl;
	}
	else
	{
		cout<<maxe+1<<endl;
	}
	

}