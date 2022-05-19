#include "Vertex.h"
#include <fstream>
#include <iostream>


void Vertex::setTownName(string TN) {
    TownName = TN;
}


string Vertex::getTownName() {
    return TownName;
}

list<pair<Vertex, int>> Vertex::getEdgeList() {
    return EdgeList;
}

Vertex::Vertex(string TownName) {
    this->TownName = TownName;

}

void Vertex::addEdge(Vertex V, int cost) {
    EdgeList.emplace_back(V,cost);
}

void Vertex::UpdateEdge(string V, int cost) {
    for (auto it = EdgeList.begin(); it != EdgeList.end(); it++) {
        if (it->first.TownName == V) {
            it->second = cost;
            return;
        }
    }
}

void Vertex::DeleteEdge(string V) {
    for (auto it = EdgeList.begin(); it != EdgeList.end(); it++) {
        if (it->first.TownName == V) {
            EdgeList.erase(it);
            return;
        }
    }

}

/////////////////////////////////////////////////////////////////////////////
//Print Edge List function
//void Vertex::printEdgeList() {
//	cout << "[";
//	for (auto it = EdgeList.begin(); it != EdgeList.end(); it++) {
//		cout << it->getEdgeDestinationVertexID() << "(" << it->getEdgeWeight() << ") | ";
//	}
//	cout << "]";
//	cout << endl;
//}
//
////////////////////////////////////////////////////////////////////////////////////////
////Files
//void Vertex::saveEdgeList() {
//	fstream myFiles;
//	myFiles.open("Graph 4.txt", ios::out | ios::app);
//	myFiles << "[";
//	for (auto it = EdgeList.begin(); it != EdgeList.end(); it++) {
//		myFiles << it->getEdgeDestinationVertexID() << "(" << it->getEdgeWeight() << ") | ";
//	}
//	myFiles << "]";
//	myFiles << endl;
//}

