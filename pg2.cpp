#include <iostream>
using namespace std;

struct Node {
    int student_id;
    Node* prev;
    Node* next;
};

class DoublyLinkedList {
    Node* head;

public:
    DoublyLinkedList() {
        head = nullptr;
    }

    void append(int id) {
        Node* newNode = new Node{id, nullptr, nullptr};

        if (!head) {
            head = newNode;
            return;
        }

        Node* temp = head;
        while (temp->next) {
            temp = temp->next;
        }

        temp->next = newNode;
        newNode->prev = temp;
    }

    void insertAtPosition(int pos, int id) {
        Node* newNode = new Node{id, nullptr, nullptr};

        if (pos == 0) {
            newNode->next = head;
            if (head) head->prev = newNode;
            head = newNode;
            return;
        }

        Node* temp = head;
        int index = 0;

        while (temp && index < pos - 1) {
            temp = temp->next;
            index++;
        }

        if (!temp) {
            cout << "Position out of range\n";
            delete newNode;
            return;
        }

        newNode->next = temp->next;
        newNode->prev = temp;

        if (temp->next)
            temp->next->prev = newNode;

        temp->next = newNode;
    }

    void display() {
        Node* temp = head;
        cout << "Student IDs: ";
        while (temp) {
            cout << temp->student_id << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

int main() {
    DoublyLinkedList list;

    // create list of 6 students
    list.append(1);
    list.append(2);
    list.append(3);
    list.append(4);
    list.append(6);
    list.append(7);

    cout << "Before insertion:\n";
    list.display();

    // insert student with ID 5 at 3rd position (index 2)
    list.insertAtPosition(2, 5);

    cout << "After insertion at 3rd position:\n";
    list.display();

    return 0;
}