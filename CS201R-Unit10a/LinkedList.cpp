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
}
LinkedList::~LinkedList() {
	cout << "DESTRUCTOR\n";
}
void LinkedList::addNode(dataType d) {
	cout << "need to implement addnode\n";
}
void LinkedList::addNodeOrdered(dataType d) {
	cout << "need to implement addnode ordered\n";
}
void LinkedList::delNode(string name) {
	cout << "need to implement delnode\n";
}
void LinkedList::printList() {
	cout << "need to implement printlist\n";

}