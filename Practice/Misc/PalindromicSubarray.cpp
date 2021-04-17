#include<bits/stdc++.h>
using namespace std;

// Palindrome are words which when spelt backwards, spell same
// Check if a subarray of size K exists in an array such that
// Concatenation of elements form a palindrome

// Store concatenation of first K elements
// Iterate and apply sliding window approach


bool isPalindrome(int n)
{
	int temp=n, number=0;
	// 121 
	// number = 1; temp =  12
	// number = 12; temp = 1
	// number = 121; temp = 0
	while(temp > 0)
	{
		number = number*10 + temp%10;
		temp = temp/10;
	}

	if(number == n)
	{
		return true;
	}
	return false;
}


int findPalindromicSubarray(vector<int> arr, int k)
{
	int num=0;
	for(int i=0;i<k;i++)
	{
		num = num*10 + arr[i];
	}
	if(isPalindrome(num))
	{
		return 0;
	}
	for(int i=k;k<arr.size();i++)
	{
		num = (num % (int)pow(10,k-1))*10 + arr[i];

		if(isPalindrome(num))
		{
			return i-k+1;
		}
	}
	return -1;
}


int main()
{
	vector<int> arr={2,3,5,1,1,5};
	int k=4;
	int ans = findPalindromicSubarray(arr,k);
	if(ans == -1)
	{
		cout<<"NULL"<<endl;
	}
	else
	{
		for(int i=ans;i<ans+k;i++)
		{
			cout<<arr[i]<<" ";
		}
		cout<<endl;
	}
}