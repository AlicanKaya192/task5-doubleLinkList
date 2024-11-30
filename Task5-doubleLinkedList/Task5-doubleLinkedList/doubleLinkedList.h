#ifndef DOUBLELINKEDLIST_H
#define DOUBLELINKEDLIST_H

#include <iostream>

struct Node {
    int data;
    Node* prev;
    Node* next;

    Node(int value);
};

class DoubleLinkedList {
private:
    Node* head;
    Node* tail;
    int listSize;

public:
    DoubleLinkedList();
    ~DoubleLinkedList();

    void addAtFront(int value);
    void addAtEnd(int value);
    void removeFromFront();
    void removeFromEnd();
    void print() const;
    int size() const;
};

#endif // DOUBLELINKEDLIST_H