#ifndef CONTACTS_H
#define CONTACTS_H

#include <string>
using namespace std;

class ContactNode {
    public:
        ContactNode(string contactName, string contactPhoneNum);
        void InsertAfter(ContactNode* nodeLoc);
        string GetName() const;
        string GetPhoneNumber() const;
        ContactNode* GetNext() const;
        void PrintContactNode() const;
    private:
        string contactName;
        string contactPhoneNum;
        ContactNode* nextNodePtr;
};

#endif