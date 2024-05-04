#include <iostream>

using namespace std;

struct ListNode {
    int val;
    ListNode* prev;
    ListNode* next;
    
    ListNode(int x) : val(x), prev(nullptr), next(nullptr) {}
};

class MyCircularDeque {
private:
    int capacity;
    int size;
    ListNode* head;
    ListNode* tail;
    
public:
    MyCircularDeque(int k) {
        capacity = k;
        size = 0;
        head = new ListNode(0);
        tail = new ListNode(0);
        head->next = tail;
        tail->prev = head;
    }
    
    bool insertFront(int value) {
        if (size == capacity) return false;
        ListNode* newNode = new ListNode(value);
        newNode->prev = head;
        newNode->next = head->next;
        head->next->prev = newNode;
        head->next = newNode;
        size++;
        return true;
    }
    
    bool insertLast(int value) {
        if (size == capacity) return false;
        ListNode* newNode = new ListNode(value);
        newNode->prev = tail->prev;
        newNode->next = tail;
        tail->prev->next = newNode;
        tail->prev = newNode;
        size++;
        return true;
    }
    
    bool deleteFront() {
        if (size == 0) return false;
        ListNode* toDelete = head->next;
        head->next = toDelete->next;
        toDelete->next->prev = head;
        delete toDelete;
        size--;
        return true;
    }
    
    bool deleteLast() {
        if (size == 0) return false;
        ListNode* toDelete = tail->prev;
        tail->prev = toDelete->prev;
        toDelete->prev->next = tail;
        delete toDelete;
        size--;
        return true;
    }
    
    int getFront() {
        if (size == 0) return -1;
        return head->next->val;
    }
    
    int getRear() {
        if (size == 0) return -1;
        return tail->prev->val;
    }
    
    bool isEmpty() {
        return size == 0;
    }
    
    bool isFull() {
        return size == capacity;
    }
};
