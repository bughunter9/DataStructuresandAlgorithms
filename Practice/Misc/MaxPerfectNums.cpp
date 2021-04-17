#include<bits/stdc++.h>
using namespace std;

// Find Max Perfect Numbers in a Subarray of size K
// What are Perfect Numbers ?
// Perfect Numbers are the numbers which are equal to the sum of their proper divisors(+ve divisors)
// except for the numbers themselves
// Eg : 6 => { 1,2,3 } Therefore , 6 is a Perfect Number

// Traverse Array for Perfect Nums 
// Replace Perfect Nums with 1 else with 0
// Now our array contains only 1 and 0
// Find max sum for our K size subarray

bool isPerfectNumber(int n)
{
	int sum=1;
	for(int i=2;i<sqrt(n);i++)
	{
		if(n%i == 0)
		{
			if(i == n/i)
			{
				sum += i;
			}
			else
			{
				sum += i + n/i;
			}
		}
	}

	if(sum == n && n!=1)
	{
		return true;
	}
	else
	{
		return false;
	}
}

int maxSum(int arr[], int n, int k)
{
	if(n<k)
	{
		cout<<"Invalid Data"<<endl;
		return -1;
	}
	int sum=0;
	for(int i=0;i<k;i++)
	{
		sum += arr[i];
	}
	int ans=sum;
	for(int i=k;i<n;i++)
	{
		sum += arr[i] - arr[i-k];
		ans= max(ans,sum);
	}
	return ans;
}

int maxPerfectSubarray(int arr[], int n, int k)
{
	for(int i=0;i<n;i++)
	{
		if(isPerfectNumber(arr[i]))
		{
			arr[i]=1;
		}
		else
		{
			arr[i]=0;
		}
	}
	return maxSum(arr,n,k);
}

int main()
{
	int arr[]={28,2,3,6,496,99,8128,24};
	cout<<maxPerfectSubarray(arr,8,4)<<endl;
	return 0;
}