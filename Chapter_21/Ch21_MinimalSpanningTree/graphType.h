
#ifndef H_graph
#define H_graph

#include <iostream>
#include <fstream>
#include <iomanip>
#include "linkedList.h"
#include "linkedListForGraph.h"
#include "linkedQueue.h"

using namespace std;

const double infinity = 1000000000;  //This will be used in later 
                                     //parts of this chapter, when
                                     //we discuss weighted graphs.

template <class vType, int size>
class graphType
{
public:
    bool isEmpty() const;
	 //Function to determine whether the graph is empty.
	 //Postcondition: Returns true if the graph is empty;
 	 //               otherwise, returns false.
    void createGraph();
	 //Function to create a graph.
	 //Postcondition: The graph is created using the  
 	 //               adjacency list representation.
    void clearGraph();
	 //Function to clear graph.
	 //Postcondition: The memory occupied by each vertex 
	 //               is deallocated.
    void printGraph() const;
	 //Function to print graph.
	 //Postcondition: The graph is printed.

    void depthFirstTraversal();
	 //Function to perform the depth first traversal of
	 //the entire graph.
	 //Postcondition: The vertices of the graph are printed 
	 //               using depth first traversal algorithm.

    void dftAtVertex(vType vertex);
	 //Function to perform the depth first traversal of 
	 //the graph at a node specified by the parameter vertex.
	 //Postcondition: Starting at vertex, the vertices are 
	 //               printed using depth first traversal 
	 //               algorithm.

    void breadthFirstTraversal();
	 //Function to perform the breadth first traversal of
	 //the entire graph.
	 //Postcondition: The vertices of the graph are printed 
	 //               using breadth first traversal algorithm.

    graphType(); 
	 //default constructor
	 //Postcondition: gSize = 0; maxSize = size;

    ~graphType();
	  //destructor
	  //The storage occupied by the vertices is deallocated.

protected:
    int maxSize;    //maximum number of vertices
    int gSize;	  //current number of vertices
    linkedListGraph<vType> graph[size]; //array to create
                          //adjacency lists (linked lists)

private:
    void dft(vType v, bool visited[]);
	 //Function to perform the depth first traversal of 
	 //the graph at a node specified by the parameter vertex.
	 //This function is used by the public member functions
	 //depthFirstTraversal and dftAtVertex.
	 //Postcondition: Starting at vertex, the vertices are 
	 //               printed using depth first traversal 
	 //               algorithm.
};

template <class vType, int size>		
bool graphType<vType,size>::isEmpty() const
{
	return (gSize == 0);
}

template <class vType, int size>
void graphType<vType, size>::createGraph()
{
	ifstream infile;
	char fileName[50];

	int index;
	vType vertex;
	vType adjacentVertex;

	if (gSize != 0)	//if the graph is not empty, make it empty
	    clearGraph();

	cout << "Enter input file name: ";
	cin >> fileName;
	cout << endl;

	infile.open(fileName);

	if (!infile)
	{
		cout << "Cannot open input file." << endl;
		return;
	}

	infile >> gSize;	//get the number of vertices

	for (index = 0; index < gSize; index++)
	{
		infile >> vertex;
		infile >> adjacentVertex;

		while (adjacentVertex != -999)
		{
			graph[vertex].insertLast(adjacentVertex);
			infile >> adjacentVertex;
		} //end while
	} // end for

	infile.close();
} //end createGraph

template <class vType, int size>
void graphType<vType, size>::clearGraph()
{
	int index;

	for (index = 0; index < gSize; index++)
		graph[index].destroyList();

	gSize = 0;
}

template <class vType, int size>
void graphType<vType, size>::printGraph() const
{
	int index;

	for (index = 0; index < gSize; index++)
	{
		cout << index << " ";
		graph[index].print();
		cout << endl;
	}

	cout << endl;
}

template <class vType, int size>
void graphType<vType, size>::depthFirstTraversal()
{
    bool *visited;    //array to keep track of the visited vertices
    visited = new bool[gSize];

    int index;

    for (index = 0; index < gSize; index++) 
	    visited[index] = false;   
	
    for (index = 0; index < gSize; index++)	//for each vertex that
		if (!visited[index])                //is not visited do a
			dft(index,visited);             //depth first traverssal
    delete [] visited;
} //end depthFirstTraversal

template<class vType, int size>
void graphType<vType, size>::dft(vType v, bool visited[])
{
	vType w;

	vType *adjacencyList; 	//array to retrieve 
  							//the adjacent vertices
	adjacencyList = new vType[gSize];
	
	int alLength = 0;  //the number of adjacent vertices

	visited[v] = true;
	cout << " " << v << " ";  //visit the vertex

	graph[v].getAdjacentVertices(adjacencyList, alLength);
               //retrieve the adjacent vertices into adjacencyList

	for (int index = 0; index < alLength; index++) //for each 
	{					    //vertex adjacent to v
		w = adjacencyList[index];
		if (!visited[w])
		   dft(w, visited);
	} //end while

	delete [] adjacencyList;
} //end dft

template <class vType, int size>
void graphType<vType, size>::dftAtVertex(vType vertex)
{
	bool *visited;

	visited = new bool[gSize];

	for (int index = 0; index < gSize; index++)
		visited[index] = false;
	
	dft(vertex, visited);
	
	delete [] visited;

} // end dftAtVertex

template <class vType, int size>
void graphType<vType, size>::breadthFirstTraversal()
{
	linkedQueueType<vType> queue;

	vType u;

	bool *visited;
	visited = new bool[gSize];

	for (int ind = 0; ind < gSize; ind++)
		visited[ind] = false;	//initialize the array 
  				  				//visited to false

	vType *adjacencyList;

	adjacencyList = new vType[gSize];

	int alLength = 0;

	for (int index = 0; index < gSize; index++)
		if (!visited[index])
		{
			queue.addQueue(index);
			visited[index] = true;
			cout << " " << index << " ";

			while (!queue.isEmptyQueue())
			{
				u = queue.front();
				queue.deleteQueue();
				graph[u].getAdjacentVertices(adjacencyList, alLength);
				for (int w = 0; w < alLength; w++)
					if (!visited[adjacencyList[w]])
					{
						queue.addQueue(adjacencyList[w]);
						visited[adjacencyList[w]] = true;
						cout << " " << adjacencyList[w] << " ";
					}
			} //end while
		}
		
	delete [] visited;
	delete [] adjacencyList;
} //end breadthFirstTraversal

template <class vType, int size>
graphType<vType,size>::graphType()
{
	maxSize = size;
	gSize = 0;
}

template <class vType,int size>
graphType<vType,size>::~graphType()
{
	clearGraph();
}

#endif

