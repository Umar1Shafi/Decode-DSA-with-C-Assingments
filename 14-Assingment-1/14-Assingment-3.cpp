#include <iostream>

using namespace std;

class Node {
public:
    int data;
    Node* next;
    
    Node(int value) {
        data = value;
        next = nullptr;
    }
};

class LinkedList {
public:
    Node* head;
    Node* tail;
    
    LinkedList() {
        head = nullptr;
        tail = nullptr;
    }
    
    void insert(int idx, int value) {
        Node* newNode = new Node(value);
        if (head == nullptr) {
            head = newNode;
            tail = newNode;
        } else if (idx == 0) {
            newNode->next = head;
            head = newNode;
        } else {
            Node* temp = head;
            for (int i = 0; i < idx - 1; ++i) {
                temp = temp->next;
            }
            newNode->next = temp->next;
            temp->next = newNode;
            if (newNode->next == nullptr) {
                tail = newNode;
            }
        }
    }
    
    void remove(int idx) {
        if (head == nullptr) {
            return;
        }
        if (idx == 0) {
            Node* temp = head;
            head = head->next;
            delete temp;
            if (head == nullptr) {
                tail = nullptr;
            }
        } else {
            Node* temp = head;
            for (int i = 0; temp != nullptr && i < idx - 1; ++i) {
                temp = temp->next;
            }
            if (temp == nullptr || temp->next == nullptr) {
                return;
            }
            Node* nextNode = temp->next->next;
            delete temp->next;
            temp->next = nextNode;
            if (temp->next == nullptr) {
                tail = temp;
            }
        }
    }
    
    int get(int idx) {
        Node* temp = head;
        for (int i = 0; temp != nullptr && i < idx; ++i) {
            temp = temp->next;
        }
        if (temp == nullptr) {
            return -1; // Invalid index
        }
        return temp->data;
    }
    
    void display() {
        Node* temp = head;
        while (temp != nullptr) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

int main() {
    LinkedList ll;
    ll.insert(0, 1);
    ll.insert(1, 2);
    ll.insert(2, 3);
    ll.insert(3, 4);
    ll.insert(4, 5);
    ll.display(); // Output: 1 2 3 4 5
    ll.remove(1);
    ll.display(); // Output: 1 3 4 5
    cout << ll.get(2) << endl; // Output: 4
    
    return 0;
}
