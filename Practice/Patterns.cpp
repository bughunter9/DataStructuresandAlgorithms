#include <bits/stdc++.h>
using namespace std;


int main()
{
	int n;
	cin>>n;

	// Inverted Pattern
	// 1 2 3 4 5 
	// 1 2 3 4
	// 1 2 3
	// 1 2 
	// 1

	for(int i=0;i<n;i++)   			
	{
		for(int j=1;j<=n-i;j++)
		{
			cout<<j<<" ";
		}
		cout<<endl;
	}


	// 0-1 Pattern
	// 1
	// 0 1
	// 1 0 1
	// 0 1 0 1
	// 1 0 1 0 1 

	for(int i=0;i<n;i++)
	{
		for(int j=0;j<=i;j++)
		{
			if((i%2==0 && j%2==0) || (i%2!=0 && j%2!=0))
			{
				cout<<"1 ";
			}
			else
			{
				cout<<"0 ";
			}
		}
		cout<<endl;
	}


	// Rhombus Pattern
	//     * * * * *
	//    * * * * *
	//   * * * * *
	//  * * * * *
	// * * * * *

	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n-i;j++)
		{
			cout<<" ";
		}
		for(int j=0;j<n;j++)
		{
			cout<<"* ";
		}
		cout<<endl;
	}

	// Number Pattern
	//     1
	//    1 2
	//   1 2 3
	//  1 2 3 4
	// 1 2 3 4 5

	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n-i;j++)
		{
			cout<<" ";
		}
		for(int j=0;j<=i;j++)
		{
			cout<<j+1<<" ";
		}
		cout<<endl;
	}

	// Palindromic Pattern
	//          1
	//        2 1 2
	// 		3 2 1 2 3
	// 	  4 3 2 1 2 3 4
	//  5 4 3 2 1 2 3 4 5

	for(int i=1;i<=n;i++)
	{
		int j;
		for(j=1;j<=(n-i);j++)
		{
			cout<<"  ";
		}
		int k=i;
		for(;j<=n;j++)
		{
			cout<<k--<<" ";
		}
		k=2;
		for(;j<=n+i-1;j++)
		{
			cout<<k++<<" ";
		}
		cout<<endl;
	}

	// Star Pattern
	// 		 *
	// 	   * * *
	//   * * * * *
	//	   * * *
	//       *


	for(int i=0;i<n;i++)
	{
		for(int j=0;j<2*(n-i-1);j++)
		{
			cout<<" ";
		}
		for(int j=0;j<=2*i;j++)
		{
			cout<<" *";
		}
		cout<<endl;
	}
	for(int i=n-1;i>0;i--)
	{
		for(int j=0;j<2*(n-i);j++)
		{
			cout<<" ";
		}
		for(int j=1;j<2*i;j++)
		{
			cout<<" *";
		}
		cout<<endl;
	}

	// Zig Zag Pattern
	//
	//		*		*
	//	  *	  *	  *	  *
	//	*		*		*

	for(int i=1;i<=3;i++)
	{
		for(int j=1;j<=n;j++)
		{
			if((i+j)%4==0 || (i==2 && j%4==0))
			{
				cout<<"*";
			}
			else
			{
				cout<<" ";
			}
		}
		cout<<endl;
	}
}