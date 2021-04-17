#include<bits/stdc++.h>
using namespace std;

// Maximum Sum of Subarray with size = K and sum < X
// Calculate sum of first K elements , initialise with sum ,
// Iterate over the rest of the array, Keep adding one element in sum and removing one from start
// Compare new sum with ans in each iteration

void maxSubArraySum(int arr[], int n, int k, int x)
{
	int sum=0,ans=0;
	for(int i=0;i<k;i++)
	{
		sum += arr[k];
	}
	if(sum < x)
	{
		ans = sum;
	}
	for(int i=k;i<n;i++)
	{
		sum -= arr[i-k];
		sum += arr[i];

		if(sum < x)
		{
			ans = max(ans,sum);
		}
	}
	cout<<ans<<endl;
}


int main()
{
	int arr[]={7,5,4,6,8,9};
	maxSubArraySum(arr,6,3,20);
}