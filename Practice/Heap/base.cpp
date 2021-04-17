#include<bits/stdc++.h>
using namespace std;

// Heaps are of 2 types : Max Heap and Min Heap
// Binary Tree Based Data Structure
// MaxHeap: When the Root node is greater than rest of the nodes present in the subtree
// MinHeap: When the Root node is smaller than rest of the nodes present in the subtree

// Heaps implemented in STL are max-heaps: priority queue <int,vector<int>>

int main()
{
	priority_queue <int , vector<int>> pq; // MAX-HEAP
	pq.push(3);
	pq.push(4);
	pq.push(1);
	pq.push(0);

	cout<<pq.top()<<endl;
	pq.pop();
	cout<<pq.top()<<endl;

	priority_queue <int,vector<int>,greater<int>> pqm; // MIN-HEAP
	pqm.push(3);
	pqm.push(4);
	pqm.push(1);
	pqm.push(0);

	cout<<pqm.top()<<endl;
	pqm.pop();
	cout<<pqm.top()<<endl;
	cout<<pqm.size()<<endl;

	return 0;
}