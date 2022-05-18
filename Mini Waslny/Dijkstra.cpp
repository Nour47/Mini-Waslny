#include "Dijkstra.h"

pair<list<string>, int> Dijkstra::dijkstra(string source, string destination, list<Vertex> Graph) {
    // o(v * e)
    // We can optimize it to o(v + e log(e))
    queue<Vertex> q;
    unordered_map<string, pair<int, string>> table;
    //first is the total cost
    //second is the parent of the vertex
    for (Vertex vertex: Graph) {
        table[vertex.getTownName()].first = INT_MAX;
        if (vertex.getTownName() == source)
            q.push(vertex);
    }
    table[source] = {0, source};
    while (!q.empty()) {
        list<pair<Vertex, int>> Edges = q.front().getEdgeList();
        for (auto &Edge: Edges) {
            int cost = table[q.front().getTownName()].first + Edge.second;
            //total cost of th current node + the cost to travel for the next node
            int TotalCost = table[Edge.first.getTownName()].first;
            //total cost of the next node
            if (cost < TotalCost) {
                q.push(Edge.first);
                table[Edge.first.getTownName()] = {cost, q.front().getTownName()};
            }
        }
        q.pop();
    }
    list<string> path;
    path.push_back(destination);
    string parent = table[destination].second;
    path.push_front(parent);
    while (parent != source) {
        parent = table[parent].second;
        path.push_back(parent);
    }
    return {path, table[destination].first};

}