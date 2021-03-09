#include<bits/stdc++.h>
#include<stack>
using namespace std;


void insertAtBottom(stack<int> &st,int ele)
{
	if(st.empty())
	{
		st.push(ele);
		return;
	}

	int topElement=st.top();  // 1 => 2 => 3 => 4 
	st.pop();
	insertAtBottom(st,ele);
	st.push(topElement);  // 4 => 3 => 2 => 1(top)
}

void reverse(stack<int> &st)
{
	if(st.empty())
	{
		return;
	}
	int ele=st.top();  // 4	3 2	1 => 3 2 1 => 2 1 => 1 => null 
	st.pop();
	reverse(st);
	insertAtBottom(st,ele);
}

int main()
{
	stack<int> st;
	st.push(1);
	st.push(2);
	st.push(3);
	st.push(4);

	reverse(st);
	while(!st.empty())
	{
		cout<<st.top()<<" ";
		st.pop();
	}

	cout<<endl;
}

