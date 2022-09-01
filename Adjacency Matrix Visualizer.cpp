#include <iostream>
using namespace std;

int main() {
	int numNodes, numEdges;
	cout << "Input number of nodes: ";
	cin >> numNodes;
	cout << "Input number of edges: ";
	cin >> numEdges;
	int adjacencyMatrix[numNodes + 1][numNodes + 1];
	for(int i = 0; i < numNodes + 1; i++) {
		for(int j = 0; j < numNodes + 1; j++) {
			adjacencyMatrix[i][j] = 0;
		}
	}
	cout << "Input edges by inputting nodes in pairs (e.g. Enter \"0 2 3 4\" or \"2 0 4 3\" to represent an edge between nodes #0 and #2 and an edge between nodes #3 and #4): ";
	for(int i = 0; i < numEdges; i++) {
		int startingNode, endNode;
		cin >> startingNode >> endNode;
		adjacencyMatrix[startingNode][endNode] = 1;
		adjacencyMatrix[endNode][startingNode] = 1;
	}
	cout << endl;
	cout << "Your adjacency matrix (first row/column signifies node #0, second row/column signifies node #1, and so on... - 1 signifies that an edge exists between the two nodes and 0 signifies that an edge does NOT exist between the two nodes):" << endl;
	for(int i = 0; i < numNodes; i++) {
		for(int j = 0; j < numNodes; j++) {
			cout << adjacencyMatrix[i][j] << " ";
		}
		cout << endl;
	}
}

