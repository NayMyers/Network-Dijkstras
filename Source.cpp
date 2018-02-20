#pragma once
#include <vector>
#include <iostream>
#include <string>

using namespace std;

#define INFINITY 1000000
#define INVALID_NODE -1

class Node
{
public:
	int previous = INVALID_NODE;
	int distfromsource = INFINITY;
	bool visited = false;
};

class Network
{
private:
	//Attributes

	int startnode = INVALID_NODE;
	int endnode = INVALID_NODE;
	vector<vector<int>> Topology;
	vector<Node> NodeTable;
	int currentnode = 0;
public:
	//Methods
	void setStartNode(char start);
	void setEndNode(char end);
	void loadDataFromFile(string filename);
};

void Network::loadDataFromFile(string filename)
{

}

int main()
{

	return 0;
}