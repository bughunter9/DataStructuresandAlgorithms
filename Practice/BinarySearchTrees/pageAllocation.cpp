#include<bits/stdc++.h>
using namespace std;

// 1. Find Range
// 2. Apply Binary Search and check for feasible soln

bool isPossible(int arr[], int n, int m, int min)
{
	int studentsReqd = 1, sum = 0;

	for(int i=0;i<n;i++)
	{
		if(arr[i]>min)
			//Value of a book pages > Minimum Possible Value of Max Pages
		{
			return false;
		}
		if(sum + arr[i] > min)
		{
			studentsReqd++;
			sum = arr[i];

			if(studentsReqd > m)
			{
				return false;
			}
		}
		else
		{
			sum += arr[i];
		}
	}
	return true;
}

int allocationMin(int arr[], int n, int m)
{
	int sum=0;
	if(n < m)
	{
		return -1;
	}
	for(int i=0;i<n;i++)
	{
		sum += arr[i];
	}
	int start=0, end=sum, ans=INT_MAX;
	while(start <= end)
	{
		int mid = (start + end)/2;
		if(isPossible(arr,n,m,mid))
		{
			ans = min(ans,mid);
			end = mid-1;
		}
		else
		{
			start = mid+1;
		}
	}
	return ans;
}

int main()
{
	int arr[]={12,34,67,90};
	cout<<allocationMin(arr,4,2)<<endl;
	return 0;
}