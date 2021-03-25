#include<bits/stdc++.h>
using namespace std;

void swap(int *a,int *b)
{
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
}

void reverse(int a[], int n)
{
	for(int i=0;i<n;i++)
	{
		if(i<n-i)
		{
			swap(&a[i],&a[n-1-i]);	
		}
	}
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
	cout<<endl;
}

void rearrange(int b[], int n) // First negative then positive numbers
{
	int i=0;
	int j=n-1;
	while(i<j)
	{
		while(b[i]<0) // Searching for postive numbers
		{
			i++;
		}
		while(b[j]>=0)// Searching for negative numbers
		{
			j--;
		}
		if(i<=j)
		{
			swap(&b[i],&b[j]);
		}
	}
	for(int k=0;k<n;k++)
	{
		cout<<b[k]<<" ";
	}
	cout<<endl;
}


int main()
{
	int n;
	cin >> n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	rearrange(arr,n);
	// reverse(arr,n);
	return 0;
}