#include <bits/stdc++.h>
using namespace std;

bool pairSum(int arr[],int n,int k)
{
	for(int i=0;i<n-1;i++)
	{
		for(int j=i;j<n;j++)
		{
			if(arr[i]+arr[j]==k)
			{
				cout<<i+1<<" "<<j+1<<endl;
				return true;
			}
		}
	}
	return false;

}


bool pairSum2(int arr[],int n,int k)
{
	int low=0,high=n-1;
	while(low < high)
	{
		if(arr[low] + arr[high] == k)
		{
			cout<<low+1<<" "<<high+1<<endl;
			return true;
		}
		else if(arr[low] + arr[high] > k)
		{
			high--;
		}
		else
		{
			low++;
		}
	}
	return false;
}

int main()
{
	int n,k;
	cin>>n>>k;
	int a[n];
	for(int i=0;i<n;i++)
	{
			cin>>a[i];
	}

	// cout<<pairSum(a,n,k)<<endl;
	cout<<pairSum2(a,n,k)<<endl;

	return 0;
}