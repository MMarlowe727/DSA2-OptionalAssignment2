#ifndef PRIM_CPP
#define PRIM_CPP

#include <iostream>
#include <bits/stdc++.h>
#include "prim.hpp"

using namespace std;


int SIZE = 9;

//finds minimum weight from vertices not already in mst
int minVal(int wgts[], bool set[])
{
	int minimum = INT_MAX;
	int minimum_index;
	
	for (int i = 0; i < SIZE; i++)
	{
		if((set[i] == false) && (wgts[i] < minimum))
		{
			minimum = wgts[i];
			minimum_index = i;
		}
	}
	
	return minimum_index;
}
//prints vertices, weights of the edges, and the total weight
void print(int parent[], int graph[][9])
{
	int totalWeight = 0;
	cout << "Edge \tWeight\n";
	for (int i = 1; i < SIZE; i++)
	{
		totalWeight += graph[i][parent[i]];
		cout << parent[i] << " - " << i << " \t"
			 << graph[i][parent[i]] << "\n";
	}
	cout << "Total Graph Weight:\n" << "\t" << totalWeight << "\n";
}
//calculates the mst from the given graph
void primCalc(int graph[][9], int SIZE)
{
	int parent[SIZE]; //stores minimum spanning tree
	int wgts[SIZE]; //values used to pick min weight
	bool set[SIZE]; //represents which vertices are included in mst
	
	for (int i = 0; i < SIZE; i++)
	{
		wgts[i] = INT_MAX;
		set[i] = false;
	}
	
	wgts[0] = 0; //first vertex always included
	
	parent[0] = -1; //first node is the root
	
	for(int num = 0; num < SIZE - 1; num++)
	{
		int min = minVal(wgts, set); //calls the function to find the minimum weight
		
		set[min] = true; //adds value to set
		
		
		for (int i = 0; i < SIZE; i++)
		{
			if((graph[min][i] && set[i] == false) && (graph[min][i] < wgts[i]))
			{
				parent[i] = min;
				wgts[i] = graph[min][i];
			}
		}
	}
	
	print(parent, graph);
}

#endif