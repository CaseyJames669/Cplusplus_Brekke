#ifndef H_weightedGraph
#define H_weightedGraph

#include <iostream>
#include <fstream>
#include <iomanip>
#include "graphType.h"

using namespace std;

template <class vType, int size>
class weightedGraphType: public graphType<vType, size>
{
public:
    void createWeightedGraph();
	  //Function to create the graph and the weight matrix.
	  //Postcondition: The graph using adjacency lists and 
	  //               its weight matrix is created.
    void shortestPath(vType vertex);
	  //Function to determine the weight of a shortest path 
  	  //from vertex, that is, source, to every other vertex 
 	  //in the graph.
	  //Postcondition: The weight of the shortest path from
	  //               vertex to every other vertex in the
	  //               graph is determined.
    void printShortestDistance(vType vertex);
	  //Function to print the shortest weight from vertex 
	  //to the other vertex in the graph.
	  //Postcondition: The weight of the shortest path from
	  //               vertex to every other vertex in the
	  //               graph is printed.

protected:
    double weights[size][size];	    //weight matrix
    double smallestWeight[size];	//smallest weight from 
								    //source to vertices
};


template <class vType, int size>
void weightedGraphType<vType, size>::createWeightedGraph()
{
	cout << "Write the definition of the "
		 << "function createWeightedGraph." << endl;
} //createWeightedGraph

template <class vType, int size>
void weightedGraphType<vType, size>::shortestPath(vType vertex)
{
	int i, j;
	int v;
	double minWeight;

	for (j = 0; j < gSize; j++)
		smallestWeight[j] = weights[vertex][j];

	bool weightFound[size];
	for (j = 0; j < gSize; j++)
		weightFound[j] = false;

	weightFound[vertex] = true;
	smallestWeight[vertex] = 0;

	for (i = 0; i < gSize - 1; i++)
	{
		minWeight = infinity;

		for (j = 0; j < gSize; j++)
			if (!weightFound[j])
				if (smallestWeight[j] < minWeight)
				{
					v = j;
					minWeight = smallestWeight[v];
				}

		weightFound[v] = true;

		for (j = 0; j < gSize; j++)
			if (!weightFound[j])
				if (minWeight + weights[v][j] < smallestWeight[j])
					smallestWeight[j] = minWeight + weights[v][j];
	} //end for
} //end shortestPath

template <class vType, int size>
void weightedGraphType<vType, size>::printShortestDistance
										(vType vertex)
{
	cout << "Source Vertex: " << vertex << endl;
	cout << "Shortest Distance from Source to each Vertex." << endl;
	cout << "Vertex  Shortest_Distance" << endl;

	for (int j = 0; j < gSize; j++)
		cout << setw(4) << j << setw(12) << smallestWeight[j] << endl;
	cout << endl;

}

#endif