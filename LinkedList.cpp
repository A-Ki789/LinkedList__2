#include <iostream>
#include "LinkedList.h"
#include "Node.h"
using namespace std;
LinkedList::LinkedList(int value) {
    Node* newNode = new Node(value);
    head = newNode;
    tail = newNode;
    length = 1;
}

void LinkedList::printList() {
    Node* temp = head;
    while(temp){
        cout<<temp->value<<endl;
        temp = temp->next;
    }
}

LinkedList::~LinkedList() {
    Node* temp = head;
    while(head){
        head = head->next;
        delete temp;
        temp = head;
    }
    //head, tail, length gets deleted by default destructor

}

