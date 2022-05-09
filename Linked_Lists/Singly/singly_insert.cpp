#include <iostream>
using namespace std;

struct SinglyListNode {
    int data;
    SinglyListNode *next;
    SinglyListNode() : data(0), next(nullptr) {}
    SinglyListNode(int data) : data(data), next(nullptr) {}
    SinglyListNode(int data, SinglyListNode *next) : data(data), next(next) {}
};

SinglyListNode* insertFront(SinglyListNode* head, int data) {
    return new SinglyListNode(data, head);
}

SinglyListNode* insertBack(SinglyListNode* head, int data) {
    if (head == nullptr)
        return new SinglyListNode(data);
    SinglyListNode *itr = head; 
    while (itr->next != nullptr) {
        itr = itr->next;
    }
    itr->next = new SinglyListNode(data);
    return head;
}

SinglyListNode* insertAt(int pos, SinglyListNode* head, int data) {
    if (head == nullptr || pos <= 0)
        return new SinglyListNode(data, head);
    SinglyListNode *itr = head; 
    while (itr->next != nullptr && --pos > 0) {
        itr = itr->next;
    }
    SinglyListNode* node = new SinglyListNode(data);
    node->next = itr->next;
    itr->next = node;
    return head;
}

void traverseList(SinglyListNode *head) {
    SinglyListNode *itr = head;
    cout << "\nHEAD -> ";
    while (itr != nullptr) {
        cout << itr->data << " -> ";
        itr = itr->next;
    }
    cout << "NULL\n" << endl;
}

int main() {
    SinglyListNode* head = nullptr;
    int val, pos;
    cout << "\nEnter 3 node values to insert at HEAD: ";
    for (int i = 0; i < 3; ++i) {
        cin >> val;
        head = insertFront(head, val);
    }
    traverseList(head);
    cout << "Enter 3 node values to insert at TAIL: ";
    for (int i = 0; i < 3; ++i) {
        cin >> val;
        head = insertBack(head, val);
    }
    traverseList(head);
    for (int i = 0; i < 3; ++i) {
        cout << "Enter a node value and a position to insert at: ";
        cin >> val >> pos;
        head = insertAt(pos, head, val);
        traverseList(head);
    }
    return 0;
}