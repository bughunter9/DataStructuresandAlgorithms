#include<bits/stdc++.h>
using namespace std;

// Applications of Catalans Number 
// 1. Number of possible BST
// 2. Bracket Combinations
// 3. Possible Forests
// 4. Ways of Triangulations
// 5. Possible Paths in Matrix
// 6. Dividing a circle using N chords
// 7. Dyck words of given length 


int catalan(int n)
{
	// Using Dynamic Programming , Time Complexity can  be improved

	if(n <= 1)
	{
		return 1;
	}
	int res=0;
	for(int i=0;i<n;i++)
	{
		res += catalan(i)*catalan(n-1-i);
	}
	return res;
}

int main()
{
	for(int i=0;i<10;i++)
	{
		cout<<catalan(i)<<" ";
	}
	cout<<endl;

	return 0;
}