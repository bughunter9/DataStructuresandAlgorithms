#include <bits/stdc++.h>
using namespace std;

int sume(int n)
{
	if(n==0)
	{
		return 0;
	}
	return n + sume(n-1);

}

int powe(int n,int k)
{
	if(k==0)
	{
		return 1;
	}
	return n*powe(n,k-1);
}

int fact(int n)
{
	if(n==0)
	{
		return 1;
	}
	return n*fact(n-1);
}

int fib(int n)
{
	if(n==1 || n==0)
	{
		return n;
	}
	return fib(n-1)+fib(n-2);
}

bool arrSort(int a[], int m)
{
	if(m==1)
	{
		return true;
	}
	
	return (a[1]>a[0] && arrSort(a+1,m-1)); 
	
}

void printinc(int n)
{
	if(n==1)
	{
		cout<<"1 ";
		return;
	}
	printinc(n-1);
	cout<<n<<" ";
}

void printdec(int n)
{
	if(n==1)
	{
		cout<<"1 ";
		return;
	}

	cout<<n<<" ";
	printdec(n-1);
}

int firstOcc(int arr[], int key,int n, int i)
{
	if(n==i)
	{
		return -1;
	}
	if(arr[i]==key)
	{
		return i;
	}
	return firstOcc(arr,key,n,i++);
}

int lastOcc(int arr[], int key, int i)
{
	if(i<0)
	{
		return -1;
	}
	if(arr[i]==key)
	{
		return i;
	}
	return lastOcc(arr,key,i--);
}


int main()
{
	int n,k;
	cin>>n;
	cout<<sume(n)<<endl; // Sum of all numbers till n
	cin>>k;
	// cout<<powe(n,k)<<endl; // n raised to the power of k
	// cout<<fact(n)<<endl; // factorial
	// cout<<fib(n)<<endl; // fibonacci series

	int a[5]={7,3,5,7,9};
	// cout<<arrSort(a,5)<<endl;
	int key=7;
	cout<<firstOcc(a,key,5,0)<<endl;
	cout<<lastOcc(a,key,4)<<endl;

	// printinc(n);
	// cout<<endl;
	// printdec(n);
	// cout<<endl;


	return 0;
}