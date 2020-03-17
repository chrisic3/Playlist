#include "Contacts.h"
#include <iostream>
#include <string>
using namespace std;

int main() {
	ContactNode *headNode = nullptr;
	ContactNode *node1 = nullptr;
	ContactNode *node2 = nullptr;
	ContactNode *currentNode = nullptr;
	string name;
	string phoneNumber;

	cout << "Person 1" << endl;
	cout << "Enter name:" << endl;
	getline(cin, name);
	cout << "Enter phone number:" << endl;
	getline(cin, phoneNumber);
	cout << "You entered: " << name << ", " << phoneNumber << endl;
	headNode = new ContactNode(name, phoneNumber);

	cout << endl;

	cout << "Person 2" << endl;
	cout << "Enter name:" << endl;
	getline(cin, name);
	cout << "Enter phone number:" << endl;
	getline(cin, phoneNumber);
	cout << "You entered: " << name << ", " << phoneNumber << endl;
	node1 = new ContactNode(name, phoneNumber);
	headNode->InsertAfter(node1);

	cout << endl;

	cout << "Person 3" << endl;
	cout << "Enter name:" << endl;
	getline(cin, name);
	cout << "Enter phone number:" << endl;
	getline(cin, phoneNumber);
	cout << "You entered: " << name << ", " << phoneNumber << endl;
	node2 = new ContactNode(name, phoneNumber);
	node1->InsertAfter(node2);

	currentNode = headNode;

	cout << endl;
	cout << "CONTACT LIST" << endl;
	while (currentNode != nullptr) {
		currentNode->PrintContactNode();
		currentNode = currentNode->GetNext();
		cout << endl;
	}

	return 0;
}
