#include <bits/stdc++.h>
using namespace std;

// To insert in a sorted array
void sorted(int b[], int n)
{
	for(int i=0;i<n-1;i++)
	{
		if(b[i]>b[i+1])
		{
			cout<<"Array Not Sorted"<<endl;
			return;
		}
	}
	cout<<"Array Sorted"<<endl;
	return;
}

int main()
{
	int a[50];
	int n;
	// int b[9]={2,3,4,1,4,2,9,8,0};
	// int c[3]={1,2,3};
	cout<<"Number of active elements:"<<endl;
	cin>>n;

	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	int k=0;
	int insert=7;

	while(k<n && a[k]<insert)
	{
		k++;
	}
	int m=k;
	if(k<n)
	{
		while(k<n)
		{
			a[k+1]=a[k];
			k++;
		}
		a[m]=insert;
	}
	
	for(int j=0;j<n;j++)
	{
		cout<<a[j]<<" ";
	}
	cout<<endl;
	// sorted(b,9);
	// sorted(c,3);

}