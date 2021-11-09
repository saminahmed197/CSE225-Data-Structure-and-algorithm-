#include <iostream>
#include"graphtype.cpp"
using namespace std;

int main()
{
    GraphType<char> graph;
    char char1,char2,char3,char4,char5;
    cout<< "Enter the 8 verticies : "<<endl;
    for(int i=0;i<8;i++){
        cin>>char1;
        graph.AddVertex(char1);
    }
    cout<<"Enter the edges : "<<endl;
    for(int i=0;i<10;i++){
        cin>>char2>>char3;
        graph.AddEdge(char2,char3,1);
    }
    char degree;
    cout<<"Enter D to check its out degree: " <<endl;
    cin>>degree;
    cout<<"Output: "<<endl;
    cout<<graph.OutDegree(degree)<<endl;
    cout<< "Enter A and D verticies to find their edges : " <<endl;
    cin >> char5 >> char4;
    cout<<"Output: "<<endl;
    if(graph.FoundEdge(char5,char4))
    {
        cout<<"There is an edge"<< endl;
    }
    else
    {
        cout<<"There is no edge"<< endl;
    }
    cout<< "Enter B and D verticies to find their edges : " <<endl;
    cin >> char5 >> char4;
    cout<<"Output: "<<endl;
    if(graph.FoundEdge(char5, char4))
    {
        cout << "There is an edge." << endl;
    }
    else
    {
        cout << "There is no edge." << endl;
    }
    char char6;
    cout<<"Enter B and E verticies for DFS "<<endl;
    cin>>char4>>char6;
    cout<<"Output: "<<endl;
    graph.DepthFirstSearch(char4,char6);
    cout<<"Enter E and B verticies for DFS "<<endl;
    cin>>char4>>char6;
    cout<<"Output: "<<endl;
    graph.DepthFirstSearch(char4,char6);
    cout<<"Enter B and E verticies for BFS : "<<endl;
    cin>>char4>>char6;
    cout<<"Output: "<<endl;
    graph.BreadthFirstSearch(char4,char6);
    cout<<"Enter E and B verticies for BFS : "<<endl;
    cin>>char4>>char6;
    cout<<"Output: "<<endl;
    graph.BreadthFirstSearch(char4,char6);
    cout<<"Enter B and E verticies for BFS(Shortest path) : "<<endl;
    cin>>char4>>char6;
    cout<<"Output: "<<endl;
    graph.BreadthFirstSearch(char4,char6);


}

