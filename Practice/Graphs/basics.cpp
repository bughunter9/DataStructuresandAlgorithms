	
Graph Theory
Example : User connections in facebook

Components of a graph :
1. Nodes- These are the vertex. ex: users in case of facebook
2. Edges- Links between states/vertex in graph. ex: connections between users
2a: Undirected Edges : 2 way edges <->
2b: DirectedEdges : One way edges ->

Representation of Matrix: By Adjacency Matrix and Adjacency List

Depth First Search :
 				Marriage Card Distribution Logic
						A 
					B 		C
				D 		E 		F 
	In DFS, firstly we search till complete depth, ie in this example A wants to distribute his 
	Marriage Cards and B,C,D,E,F are his friends. So firstly he will check in the complete depth
	for left node B and then D and E, A wont backtrack untill the next node is NULL and then similarly 
	for the right nodes C,F.

	DFS is implemented using stacks. Traversal is done using postorder, preorder, inorder.

Breadth First Search :
				Marriage Card Distribution Logic
						A 
					B 		C
				D 		E 		F 
	In BFS, we search parallely here, ie from A, we go for B and C together, and then we
	go for D and E, adding them up in a queue and then F in the queue.

	BFS implemented using queues. Here nodes and edges can be weighted: ie Nodes and edges
	are associated with some value.


							Terminologies in a Graph

		1. Directed Graph : A graph with directed edges (1 way arrow)
		2. Undirect Graph/Adjacent Vertices : 2 vertices with a direct edge connecting them(2 way arrow)
		3. Degree of a Vertex :  Indegree and Outdegree
				Indegree : Number of incoming edges to a node
				Outdegree : Number of outgoing edges from a node
		4. Path between 2 vertices : All vertices which come in the path of 2 given vertices 
									 is called there path.
		5. Connected Graph : All nodes are connected with each other through some nodes.
		6. Disconnected Graph : Each node is not having a path from/through the other nodes.
		7. Connected Components : Each connected graph in a Disconnected graph 
														is called a connected component. 
		8. Path from a vertex/node to the same vertex/node in a graph is called a cycle.
		9. Cyclic Graph : Graph that contains cycles.
		10. Acyclic Graph : Graph that does not contain cycles.
		11. Tree : It is a connected Acyclic graph.

				Properties of a tree with N nodes: 

						1. Number of edges = N - 1
						2. There are no cycles present.
						3. Each node has a path from every other node/vertex.

		12. Directed Acyclic Graph (DAG) : 
				Properties :
						1. It has Directed edges.
						2. It is Acyclic.
		13. Complete Graph : A graph in which each vertex/node is connected with every other vertex 
							by a direct edge.
				Number of edges for N nodes = NC2 (maths)

		14. Weighted Graph : A graph with weighted edges ie some value associated with the edges




