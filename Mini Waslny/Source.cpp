#include<iostream>
#include"Graph.h"
using namespace std;


int main()
{
    Graph g;
    string sname;
    int id1, id2, w;
    int option, option1;
    bool check = false;

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

        case 2:
            cout << "Update Vertex Operation -" << endl;
            cout << "Enter State ID of Vertex(State) to update :";
            cin >> id1;
            cout << "Enter State Name :";
            cin >> sname;
            g.updateVertex(id1, sname);

            break;

        case 3:
            cout << "Delete Vertex Operation -" << endl;
            cout << "Enter ID of Vertex(State) to Delete : ";
            cin >> id1;
            g.deleteVertex(id1);

            break;

        case 4:
            cout << "Add Edge Operation -" << endl;
            cout << "Enter ID of Source Vertex(State): ";
            cin >> id1;
            cout << "Enter ID of Destination Vertex(State): ";
            cin >> id2;
            cout << "Enter Weight of Edge: ";
            cin >> w;
            g.addEdge(id1, id2, w, check);

            break;

        case 5:
            cout << "Update Edge Operation -" << endl;
            cout << "Enter ID of Source Vertex(State): ";
            cin >> id1;
            cout << "Enter ID of Destination Vertex(State): ";
            cin >> id2;
            cout << "Enter UPDATED Weight of Edge: ";
            cin >> w;
            g.updateEdge(id1, id2, w, check);

            break;

        case 6:
            cout << "Delete Edge Operation -" << endl;
            cout << "Enter ID of Source Vertex(State): ";
            cin >> id1;
            cout << "Enter ID of Destination Vertex(State): ";
            cin >> id2;
            g.deleteEdge(id1, id2, check);

            break;

        case 7:
            cout << "Print Graph Operation -" << endl;
            g.printGraph();

            break;

        case 8:
            cout << "store Graph Operation -" << endl;
            g.saveGraph();

            break;

        default:
            cout << "Enter Proper Option number " << endl;
        }
        cout << endl;

    } while (option != 0);

    return 0;
}