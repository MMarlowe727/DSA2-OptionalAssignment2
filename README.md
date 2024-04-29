# DSA2-OptionalAssignment2

I chose to use Prim's algorithm to find the minimum spanning graph.

Graph in matrix form:
	 a  b  c  d  e  f  g  h  i
  a  0  4  0  0  0  0  0  8  0
  b  4  0  8  0  0  0  0 11  0 
  c  0  8  0  7  0  4  0  0  2
  d  0  0  7  0  9 14  0  0  0 
  e  0  0  0  9  0 10  0  0  0
  f  0  0  4 14 10  0  2  0  0
  g  0  0  0  0  0  2  0  1  6
  h  8 11  0  0  0  0  1  0  7
  i  0  0  2  0  0  0  6  7  0
  
  a -> edge 0, b -> edge 1, etc.

Pseudo-code:
	Create a set for visited vertices in the minimum spanning tree (mst)
	pick a vertex (given for this graph)
	check for minimum weight of edge to select a vertex that is not visited
	for each vertex, check all unvisited vertex for minimum weight until none remain
	
How to compile:
command "make" to call makefile, then "./main" to run the program.
	
	
