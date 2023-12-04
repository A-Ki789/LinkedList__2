

#ifndef LINKED_LIST_LINKEDLIST_H
#define LINKED_LIST_LINKEDLIST_H

#include "Node.h"

class LinkedList{

private:
    int length;
    Node* head;
    Node* tail;
public:
    explicit LinkedList(int value);
    void printList();
    ~LinkedList();

};
#endif //LINKED_LIST_LINKEDLIST_H
