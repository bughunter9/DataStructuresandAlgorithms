#include <bits/stdc++.h>
using namespace std;


// 		A			      B 					C
//    SOURCE            HELPER              DESTINATION

void hanoi(int n,char src,char dest,char helper)
{
	if(n==0)
		return;

	hanoi(n-1,src,helper,dest);
	cout<<"Move From "<<src<<" To "<<dest<<endl;
	hanoi(n-1,helper,dest,src);
}

int main()
{
	hanoi(4,'A','C','B');
	return 0;
}