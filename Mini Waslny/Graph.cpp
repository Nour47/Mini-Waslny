#pragma once

#include"Graph.h"
#include "Vertex.h"

using namespace std;


///////////////////////////////////////////////////////////////////////////////
//permanent used functions
Graph::Graph() {

}


Graph::Graph(list<Vertex> Vertices) {
    this->Vertices = Vertices;
}

void Graph::AddVertex(const string &vname) {
    Vertex v(vname);

    Vertices.emplace_back(v);
}

void Graph::RemoveVertex(string vname) {
    //remove the town from the list
    //remove the edges between the vertices and the deleted vertex
    for (auto it = Vertices.begin(); it != Vertices.end(); it++) {
        if (it->getTownName() == vname) {
            Vertices.erase(it);
            return;
        } else {
            (*it).DeleteEdge(vname);
        }
    }
}

void Graph::UpdateEdge(string v1, string v2, int cost) {
    //iterate over the list to search for vertex 1
    //v1 update edge we teb3tlo v2 and the new cost
    for (auto it = Vertices.begin(); it != Vertices.end(); it++) {
        if (it->getTownName() == v1) {
            it->UpdateEdge(v2, cost);
            return;
        }
    }

}

void Graph::AddEdge(string v1, string v2, int cost) {
    for (auto it = Vertices.begin(); it != Vertices.end(); it++) {
        if (it->getTownName() == v1) {
            it->addEdge(v2, cost);
            return;
        }
    }
}

void Graph::RemoveEdge(string v1, string v2) {
    for (auto it = Vertices.begin(); it != Vertices.end(); it++) {
        if (it->getTownName() == v1) {
            it->DeleteEdge(v2);
            return;
        }
    }

}





