#pragma once
#include<vector>
#include"Vertex.h"
using namespace std;



class Graph
{

public:
    Graph();

    Graph(list<Vertex> Vertices);
    void AddVertex(const string& vname);
    void RemoveVertex(string vname);
    void UpdateEdge(string v1,string v2, int cost);
    void AddEdge(string v1,string v2, int cost);
    void RemoveEdge(string v1,string v2);

//	void printGraph();
//	void saveGraph();
    list<Vertex> Vertices;
};

