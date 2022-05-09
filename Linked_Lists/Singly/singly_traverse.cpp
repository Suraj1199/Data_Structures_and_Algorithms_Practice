#include <iostream>
using namespace std;

struct SinglyListNode {
    int data;
    SinglyListNode *next;
    SinglyListNode() : data(0), next(nullptr) {}
    SinglyListNode(int data) : data(data), next(nullptr) {}
    SinglyListNode(int data, SinglyListNode *next) : data(data), next(next) {}
};

void traverse_list(SinglyListNode *head) {
    SinglyListNode *itr = head;
    cout << "\nHEAD -> ";
    while (itr != nullptr) {
        cout << itr->data << " -> ";
        itr = itr->next;
    }
    cout << "NULL\n" << endl;
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

int main() {
    int len;
    cout << "\nEnter the Length of the List : ";
    cin >> len;
    
    SinglyListNode *head = nullptr;
    cout << "Enter " << len << " node values : ";
    int val;
    for (int i = 0; i < len; i++) {
        cin >> val;
        head = insertBack(head, val);
    }

    traverse_list(head);

    return 0;
}