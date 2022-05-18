#pragma once

#include<string>
#include<list>


using namespace std;

class Vertex {
private:
    string TownName;
    list<pair<Vertex, int>> EdgeList;
public:
    Vertex(string TownName);

    void addEdge(Vertex V, int cost);

    void UpdateEdge(string V,int cost);

    void DeleteEdge(string V);

    void setTownName(string CN);

    string getTownName();

    list<pair<Vertex, int>> getEdgeList();
//	void printEdgeList();
//	void saveEdgeList();
};
