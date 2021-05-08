#include<bits/stdc++.h>
#include<map>
using namespace std;

// Converting bigger data into smaller data using hash functions is Hashing
// Collision => Hash Function returning same key for 2 numbers 
// 1. Separate Chaining : If collision happens, Make chain of similar values
// 2. Open Addressing : If collision happens, do Probing : 
// What is Probing ? Using a second arguement called probe number in the hash function, Probe number 
// depends on the key itself. 3 types of probing possible : Linear or Quadratic Probing ,Double Hashing 
// Load Factor(Load on each key) = Number of elements / Number of keys;

// STANDARD TEMPLATE LIBRARY
// 						MAPS 				UNORDERED MAPS
//  INSERTION 			O(log(n))			O(1)
//  ACCESSING			O(log(n))			O(1)
//  DELETION			O(log(n))			O(n)
//  IMPLEMENTED USING   RED-BLACK TREES		HASH TABLES
//						Key-Value Pairs     Key Value Pairs
//						map<int,int>mp;		unordered_map<int,int>ump;


int main()
{
	map<int,int> m;
	m[1]=2;
	cout<<m[1]<<endl;
	return 0;
}
