#include <iostream>
#include <string>
#include "Contacts.h"
using namespace std;

ContactNode::ContactNode(string contactName, string contactPhoneNum) {
    this->contactName = contactName;
    this->contactPhoneNum = contactPhoneNum;

    return;
}

void ContactNode::InsertAfter(ContactNode* nodeLoc) {
    ContactNode* tmpNext = nullptr;

    tmpNext = this->nextNodePtr;
    this->nextNodePtr = nodeLoc;
    nodeLoc->nextNodePtr = tmpNext;

    return;
}

string ContactNode::GetName() const {
    return contactName;
}

string ContactNode::GetPhoneNumber() const {
    return contactPhoneNum;
}

ContactNode* ContactNode::GetNext() const {
    return this->nextNodePtr;
}

void ContactNode::PrintContactNode() const {
    cout << "Name: " << contactName << endl;
    cout << "Phone number: " << contactPhoneNum << endl;

    return;
}