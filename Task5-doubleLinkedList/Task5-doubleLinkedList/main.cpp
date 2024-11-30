#include "DoubleLinkedList.h"

int main() {
    DoubleLinkedList list;

    list.addAtFront(10);
    list.addAtEnd(20);
    list.addAtFront(5);

    list.print();

    std::cout << "List Size: " << list.size() << "\n";

    list.removeFromFront();
    list.print();

    list.removeFromEnd();
    list.print();

    std::cout << "Final List Size: " << list.size() << "\n";

    return 0;
}
