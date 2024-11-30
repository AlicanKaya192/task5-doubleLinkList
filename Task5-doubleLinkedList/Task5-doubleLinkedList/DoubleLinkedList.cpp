#include "DoubleLinkedList.h"

Node::Node(int value) : data(value), prev(nullptr), next(nullptr) {}

DoubleLinkedList::DoubleLinkedList() : head(nullptr), tail(nullptr), listSize(0) {}

DoubleLinkedList::~DoubleLinkedList() {
    while (head) {
        Node* temp = head;
        head = head->next;
        delete temp;
    }
}

void DoubleLinkedList::addAtFront(int value) {
    Node* newNode = new Node(value);
    if (head == nullptr) {
        head = tail = newNode;
    }
    else {
        newNode->next = head;
        head->prev = newNode;
        head = newNode;
    }
    listSize++;
}

void DoubleLinkedList::addAtEnd(int value) {
    Node* newNode = new Node(value);
    if (tail == nullptr) {
        head = tail = newNode;
    }
    else {
        newNode->prev = tail;
        tail->next = newNode;
        tail = newNode;
    }
    listSize++;
}

void DoubleLinkedList::removeFromFront() {
    if (head == nullptr) {
        return;
    }
    Node* temp = head;
    if (head == tail) {
        head = tail = nullptr;
    }
    else {
        head = head->next;
        head->prev = nullptr;
    }
    delete temp;
    listSize--;
}

void DoubleLinkedList::removeFromEnd() {
    if (tail == nullptr) {
        return;
    }
    Node* temp = tail;
    if (head == tail) {
        head = tail = nullptr;
    }
    else {
        tail = tail->prev;
        tail->next = nullptr;
    }
    delete temp;
    listSize--;
}

void DoubleLinkedList::print() const {
    if (head == nullptr) {
        return;
    }
    Node* current = head;
    while (current) {
        std::cout << current->data << " ";
        current = current->next;
    }
    std::cout << "\n";
}

int DoubleLinkedList::size() const {
    return listSize;
}
