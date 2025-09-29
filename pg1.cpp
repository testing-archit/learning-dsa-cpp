#include <iostream>
#include <string>
using namespace std;

class Node {
public:
    int roll;
    string name;
    Node *next;

    Node(int r, string n) {
        roll = r;
        name = n;
        next = nullptr;
    }
};

Node* insertPos(Node* head, int pos, int roll, string name) {
    if (pos < 1) return head;

    // head will change if pos=1
    if (pos == 1) {
        Node* newNode = new Node(roll, name);
        newNode->next = head;
        return newNode;
    }

    Node* curr = head;

    // Traverse to node before insertion point
    for (int i = 1; i < pos - 1 && curr != nullptr; i++) {
        curr = curr->next;
    }

    // If position is greater than number of nodes
    if (curr == nullptr) return head;

    Node* newNode = new Node(roll, name);

    // Insert between curr and curr->next
    newNode->next = curr->next;
    curr->next = newNode;

    return head;
}

void printList(Node* head) {
    Node* curr = head;
    while (curr != nullptr) {
        cout << "[Roll: " << curr->roll << ", Name: " << curr->name << "]";
        if (curr->next != nullptr) cout << " -> ";
        curr = curr->next;
    }
    cout << endl;
}

int main() {
    // Initial list: 1->2->4 (as students)
    Node* head = new Node(1, "Alice");
    head->next = new Node(2, "Bob");
    head->next->next = new Node(4, "David");

    // Insert student at position 3
    int roll = 3, pos = 3;
    string name = "Charlie";
    head = insertPos(head, pos, roll, name);

    // Print list
    printList(head);

    return 0;
}