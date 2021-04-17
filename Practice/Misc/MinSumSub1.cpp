#include<bits/stdc++.h>
using namespace std;

// Find the Mimimum Subarray Size such that sum > X
// Iteate over the array and start adding elements to the sum
// If sum > X , remove elements from the start

int MinSubArraySum(int arr[], int n, int x)
{
	int sum=0,ans=n+1,start=0,end=0;
	while(end < n)
	{
		while(sum <= x && end < n)
		{
			sum += arr[end++];
		}
		while(sum > x && start < n)
		{
			if(end - start < ans)
			{
				ans = end - start;
			}	
			sum -= arr[start++];	
		}
	}
	return ans;
}

int main()
{
	int arr[]={1,4,45,6,10,19};
	int m = MinSubArraySum(arr,6,51);
	if(m == 7)
	{
		cout<<"Size Not found"<<endl;
	}
	else
	{
		cout<<m<<endl;
	}
}