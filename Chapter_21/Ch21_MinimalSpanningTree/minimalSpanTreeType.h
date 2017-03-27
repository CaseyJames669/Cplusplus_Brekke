#ifndef H_msTree
#define H_msTree

#include <iostream>
#include <fstream>
#include <iomanip>
#include "graphType.h"

using namespace std;

template <class vType, int size>
class msTreeType: public graphType<vType, size>
{
public:
    void createSpanningGraph();
	  //Function to create the graph and the weight matrix.
	  //Postcondition: The graph using adjacency lists and 
	  //               its weight matrix is created.
    void minimalSpanning(vType sVertex);
	  //Function to create a minimal spanning tree with
	  //root as sVertex. 
	  // Postcondition: A minimal spanning tree is created.
	  //                The weight of the edges is also
	  //                saved in the array edgeWeights
    void printTreeAndWeight();
	  //Function to output the edges of the minimal
	  //spanning tree and the weight of the minimal
	  //spanning tree.
	  //Postcondition: The edges of a minimal spanning tree
	  //               and their weights are printed.

protected:
    vType source;
    double weights[size][size];
    vType edges[size];
    double edgeWeights[size];
};


template <class vType, int size>
void msTreeType<vType, size>::createSpanningGraph()
{
	cout << "Write the definition createSpanningGraph." << endl;

} //createWeightedGraph

template <class vType, int size>
void msTreeType<vType, size>::minimalSpanning(vType sVertex)
{
	int i, j, k;
	vType startVertex, endVertex;
	double minWeight;

	source = sVertex;

	bool mstv[size];

	for (j = 0; j < gSize; j++)
	{
		mstv[j] = false;
		edges[j] = source;
		edgeWeights[j] = weights[source][j];
	}

	mstv[source] = true;
	edgeWeights[source] = 0;

	for (i = 0; i < gSize - 1; i++)
	{
		minWeight = infinity;

		for (j = 0; j < gSize; j++)
			if (mstv[j])
				for (k = 0; k < gSize; k++)
					if (!mstv[k] && weights[j][k] < minWeight)
					{
						endVertex = k;
						startVertex = j;
						minWeight = weights[j][k];
					}
		mstv[endVertex] = true;
		edges[endVertex] = startVertex;
		edgeWeights[endVertex] = minWeight;
	} //end for
} //end minimalSpanning

template <class vType, int size>
void msTreeType<vType, size>::printTreeAndWeight()
{
	double treeWeight = 0;

	cout << "Source Vertex: " << source << endl;
	cout << "Edges    Weight" << endl;

	for (int j = 0; j < gSize; j++)
	{
		if (edges[j] != j)
		{
			treeWeight = treeWeight + edgeWeights[j];
			cout << "("<<edges[j] << ", " << j << ")    "
				 << edgeWeights[j] << endl;
		}
	}

	cout << endl;
	cout << "Minimal Spanning Tree Weight: " 
		 << treeWeight << endl;
} //end printTreeAndWeight

#endif

