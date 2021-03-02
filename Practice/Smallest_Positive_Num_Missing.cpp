#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
			cin>>a[i]; // -9 5 0 3 2 
	}

	int N=1e6;
	bool b[N];
	for(int i=0;i<N;i++)
	{
		b[i]=0;  // 1 0 1 1 0 1 
	}

	for(int i=0;i<n;i++)
	{
		if(a[i]>=0)
		{
			b[a[i]]=1;
		}
	}
	int ans=-1;
	for(int i=0;i<N;i++)
	{
			if(b[i]==0)
			{
				ans=i;
				break;
			}
	}
	cout<<ans<<endl;
	return 0;
}