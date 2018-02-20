#pragma once
#include <vector>
#include <iostream>
#include <string>
#include <fstream>
#include <sstream>

using namespace std;

#define INFINITY 1000000
#define INVALID_NODE -1
#define INPUTFILE "inputData.txt"

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
	string line;
	ifstream inputfile;
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
	vector<int> nums;
	int i;
	stringstream ss(line);
	inputfile.open(filename); //OOOOO opens a file handle on the specified file
	while (inputfile)
	{
		getline(inputfile, line);
		while (ss >> i)
		{
			nums.push_back(i);

			if (ss.peek() == ',')
				ss.ignore();
			Topology.push_back(nums);
		}
		for (int x = 0; x < nums.size(); x++)
		{
			cout << nums[x];
		}
	}
	inputfile.close(); //CCCCC Closes the filehandle 

}

int main()
{
	Network myNetwork;
	myNetwork.loadDataFromFile(INPUTFILE);
	return 0;
}