#pragma once
#include<iostream>
#include"Graph.h"
#include "Dijkstra.h"
using namespace std;


int main()
{
    Graph g;
    string s1,s2, sname;
    int id1, id2, w;
    int option, option1;
    bool check = false;
    Dijkstra d;
    g.AddVertex("2");

    g.AddVertex("1");
    g.AddVertex("3");
    g.AddVertex("4");

    g.AddEdge("1", "2", 10);
    g.AddEdge("2", "3", 20);
    g.AddEdge("3", "4", 10);
    g.AddEdge("1", "4", 100);
    cout << "1. directed graph" << endl;
    cout << "2. undirected graph" << endl;
    cin >> option1;
    if (option1 == 1)
    {
        check = true;
    }
    do {
        cout << "============================================="<<endl;
        cout << "What operation do you want to perform? " <<
             " Select Option number. Enter 0 to exit." << endl;
        cout << "1. Add Vertex" << endl;
        cout << "2. Update Vertex" << endl;
        cout << "3. Delete Vertex" << endl;
        cout << "4. Add Edge" << endl;
        cout << "5. Update Edge" << endl;
        cout << "6. Delete Edge" << endl;
        cout << "7. Print Graph" << endl;
        cout << "8. store Graph" << endl;
        cout << "9. dijkstra" << endl;
        cout << "0. Exit Program" << endl;

        cin >> option;

        switch (option) {
            case 0:

                break;

            case 1:
                cout << "Add Vertex Operation -" << endl;
                cout << "Enter State Name :";
                cin >> sname;
                g.AddVertex(sname);
                break;


            case 3:
                cout << "Delete Vertex Operation -" << endl;
                cout << "Enter name of Vertex(State) to Delete : ";
                cin >> sname;
                g.RemoveVertex(sname);

                break;

            case 4:
                cout << "Add Edge Operation -" << endl;
                cout << "Enter ID of Source Vertex(State): ";
                cin >> s1;
                cout << "Enter ID of Destination Vertex(State): ";
                cin >> s2;
                cout << "Enter Weight of Edge: ";
                cin >> w;
                g.AddEdge(s2,s2,w);

                break;

            case 5:
                cout << "Update Edge Operation -" << endl;
                cout << "Enter ID of Source Vertex(State): ";
                cin >> s1;
                cout << "Enter ID of Destination Vertex(State): ";
                cin >> s2;
                cout << "Enter UPDATED Weight of Edge: ";
                cin >> w;
                g.UpdateEdge(s1,s2,w);

                break;

            case 6:
                cout << "Delete Edge Operation -" << endl;
                cout << "Enter ID of Source Vertex(State): ";
                cin >> s1;
                cout << "Enter ID of Destination Vertex(State): ";
                cin >> s2;
                g.RemoveEdge(s1, s2);

                break;

            case 7:
                cout << "Print Graph Operation -" << endl;
                //g.printGraph();

                break;

            case 8:
                cout << "store Graph Operation -" << endl;
                //g.saveGraph();

                break;

            case 9: {
                cout << "dijkstra -" << endl;
                cout << "enter source:";
                cin >> s1; cout << endl;
                cout << "enter destinstion:";
                cin >> s2; cout << endl;

                pair <list<string>, int> lst = d.dijkstra(s1, s2, g.Vertices);
                for (auto it = lst.first.begin(); it != lst.first.end(); it++)
                {
                    cout << *it << "-->";
                }
                cout << endl;
                cout << lst.second << endl;
                //g.saveGraph();

                break;
            }
            default:
                cout << "Enter Proper Option number " << endl;
        }
        cout << endl;

    } while (option != 0);

    return 0;
}