#include "LinkedList.h"

LinkedList::LinkedList() {
	cout << "CONSTRUCTOR\n";
	headPtr = nullptr;
	tailPtr = nullptr;
}
LinkedList::LinkedList(dataType d) {
	cout << "CONSTRUCTOR\n";
	Node* tempPtr = new Node;
	tempPtr->data = d;
	tempPtr->nextPtr = nullptr;
	headPtr = tempPtr;
	tailPtr = tempPtr;
}
LinkedList::~LinkedList() {
	cout << "DESTRUCTOR\n";
}
void LinkedList::addNode(dataType d) {
	//cout << "need to implement addnode to end of list\n";
	Node* newNode = new Node;
	newNode->data = d;
	newNode->nextPtr = nullptr;
	if (tailPtr == nullptr) {
		headPtr = newNode;
		tailPtr = newNode;
	}
	else {
		tailPtr->nextPtr = newNode;
		tailPtr = newNode;
	}
}
void LinkedList::addNodeOrdered(dataType d) {
	cout << "need to implement addnode ordered\n";
}
void LinkedList::delNode(string name) {
	//cout << "need to implement delnode\n";
	Node* tempNode = headPtr;
	if (tempNode != nullptr
		&& tempNode->data.lname == name) {
		headPtr = headPtr->nextPtr;
		if (headPtr == nullptr)
			tailPtr = nullptr;
		delete tempNode;
		tempNode = nullptr;
		return;
	}
	else {
		while (tempNode != nullptr
			&& tempNode->nextPtr != nullptr) {
			if (tempNode->nextPtr->data.lname == name) {
				Node* delNode = tempNode->nextPtr;
				tempNode->nextPtr = delNode->nextPtr;
				if (tempNode->nextPtr == nullptr)
					tailPtr = delNode;
				delete delNode;
				return;
			}
			tempNode = tempNode->nextPtr;
		}
	}
	cout << "Name: " << name << " was not found\n";
}
void LinkedList::printList() {
	//cout << "need to implement printlist\n";
	Node* tempPtr = headPtr;
	while (tempPtr != nullptr) {
		cout << left << setw(20) << tempPtr->data.fname  
			 << left << setw(20) << tempPtr->data.lname
			 << right << setw(10) << tempPtr->data.age << endl;
		tempPtr = tempPtr->nextPtr;
	}
	cout << endl << endl;
}