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

	int currentsum[n+1];
	currentsum[0]=0;

	for(int i=1;i<n+1;i++)
	{
		currentsum[i]=currentsum[i-1]+a[i-1];
	}
	int maxe=INT_MIN;
	for(int i=1;i<n+1;i++)
	{
		int sum=0;
		for(int j=0;j<i;j++)
		{
			sum=currentsum[i]-currentsum[j];
			maxe=max(maxe,sum);
		}
	}
	cout<<maxe<<endl;
	return 0;
}