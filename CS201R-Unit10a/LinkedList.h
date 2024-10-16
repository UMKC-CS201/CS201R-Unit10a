#pragma once
#include <string>
#include <iostream>
using namespace std;

struct dataType {
	char type;
	string lname;
	string fname;
	int age;
};

struct Node {
	dataType data;
	Node* nextPtr;
};

class LinkedList {
private:
	Node* headPtr;
	Node* tailPtr;
public:
	LinkedList();
	LinkedList(dataType);
	~LinkedList();
	void addNode(dataType d);
	void addNodeOrdered(dataType d);
	void delNode(string name);
	void printList();
};