//
// Created by Sivasubramani on 15/01/23.
//

#include "DoublyLinkedList.h"



void commandPage();

void DoublyLinkedList::add(int x) {
    Node<int> *newNode = new Node(x);
    if(head == nullptr){
        head = tail = newNode;
        length++;
    }
    else{
        tail->next = newNode;
        newNode->prev = tail;
        tail = tail->next;
        length++;
    }

}
void DoublyLinkedList::addAtBegin(int x){
    Node<int> *newNode = new Node(x);
    if(head == nullptr){
        head = tail = newNode;
        length++;
    }
    else{
        newNode->next = head;
        newNode->prev = nullptr;
        head->prev = newNode;
        head = newNode;
        length++;
    }
}
bool DoublyLinkedList::removeByValue(int x) {
    Node<int> *temp = head;
    while(temp != nullptr){
        if(temp->data == x){
            if(temp == head){
                head = temp->next;
                head->prev = nullptr;
                delete temp;
                temp = nullptr;
                length--;
                return true;
            }
            else if(temp == tail){
                tail = temp->prev;
                tail->next = nullptr;
                delete temp;
                temp = nullptr;
                length--;
                return true;
            }
            else{
                Node<int> *alter = temp->prev;
                alter->next = temp->next;
                temp->next->prev = alter;
                delete temp;
                temp = nullptr;
                length--;
                return true;
            }

        }
        temp = temp->next;
    }
    return false;
}
bool DoublyLinkedList::removeFromPostion(int pos) {
    if(head == nullptr) {
        cout<<"List has no values";
        return false;
    }
    Node<int> *temp = head;
    int i=1;
    if(pos == 1){
        head = temp->next;
        head->prev = nullptr;
        delete temp;
        temp = nullptr;
        length--;
        return true;
    }
    else if(pos == length){
        tail = temp->prev;
        tail->next = nullptr;
        delete temp;
        temp = nullptr;
        length--;
        return true;
    }

    while(temp){
        if(i==pos){
            Node<int> *alter = temp->prev;
            alter->next = temp->next;
            temp->next->prev = alter;
            delete temp;
            temp = nullptr;
            length--;
            return true;
        }
        temp = temp->next;
        i++;
    }
    cout<<"Unable to delete the value\n";
    return false;
}

void DoublyLinkedList::swapThePositions() {

}


void DoublyLinkedList::print() {
    Node<int> *temp = head;
    cout<<"Printing the List :\n";
    while(temp != nullptr){
        cout<<temp->data<<" -> ";
        temp = temp->next;
    }
    cout<<"\n";
}
void DoublyLinkedList::printReverse() {
    Node<int> *temp = tail;
    cout<<"Printing the List in Reverse order:\n";
    while(temp != nullptr){
        cout<<temp->data<<" -> ";
        temp = temp->prev;
    }
    cout<<"\n";
}

int DoublyLinkedList::getLength() {
    return length;
}

int DoublyLinkedList::searchElement(int x) {
    Node<int> *temp = head;
    int i=0;
    while(temp != nullptr){
        if(temp->data == x) {
            cout<<"Got the element at pos "<<i<<endl;
            return i;
        }
        temp = temp->prev;
        i++;
    }
    cout<<"Element Not found "<<i<<endl;
    return 0;
}


void DoublyLinkedList::swapElements(int x, int y) {
    Node<int> * v1 = findNode(x);
    Node<int> * v2 = findNode(y);
    if(!v1 || !v2) {
        cout<<"Element is missing, swap not possible\n";
        return;
    }
    int dt = v1->data;
    v1->data = v2->data;
    v2->data = dt;
//
//    if(v1->prev) v1->prev->next = v2;
//    if(v1->next) v1->next->prev = v2;
//    if(v2->next)  v2->next->prev = v1;
//    if(v2->prev)  v2->prev->next = v1;
////
//    Node<int> *tempNext = v1 ? v1->next: nullptr;
//    Node<int> *tempPrev = v1 ? v1->prev: nullptr;
//    v1->next = v2 ? v2->next : nullptr;
//    v1->prev = v2 ? v2->prev : nullptr;
//    if(v2) v2->next = tempNext;
//    if(v2) v2->prev = tempPrev;
//
//
//    if(v1 == getHead()) {
//        head = v2;
//        head->prev = nullptr;
//    }
//    else if(v2 == getHead()) {
//        head = v1;
//        head->prev = nullptr;
//    }
//    if(v1 == getTail()) {
//        tail = v2;
//        tail->next = nullptr;
//    }
//    else if(v2 == getTail()){
//        tail = v1;
//        tail->next = nullptr;
//    }

}

Node<int> *DoublyLinkedList::findNode(int x) {
    Node<int> *temp = head;
    while(temp != nullptr){
        if(temp->data == x) {
            cout<<"Got the element of val "<<x<<endl;
            return temp;
        }
        temp = temp->next;
    }
    return nullptr;
}

Node<int> *DoublyLinkedList::getHead() {
    if(this && this->head) {
        cout<<"Head value is "<<head->data<<"\n";
        return head;
    }
    return nullptr;
}

Node<int> *DoublyLinkedList::getTail() {
    if(this && this->tail) {
        cout<<"Tail value is "<<tail->data<<"\n";
        return tail;
    }
    return nullptr;
}

void DoublyLinkedList::swapElementsByPostion(int p1, int p2) {
    Node<int> * v1 = findNodePosition(p1);
    Node<int> * v2 = findNodePosition(p2);
    if(!v1 || !v2) {
        cout<<"Element is missing, swap not possible\n";
        return;
    }
    int dt = v1->data;
    v1->data = v2->data;
    v2->data = dt;

//    Node<int> *tempNext = v1->next;
//    Node<int> *tempPrev = v1->prev;
//    v1->next = v2->next;
//    v1->prev = v2->prev;
//    v2->next = tempNext;
//    v2->prev = tempPrev;
//    if(v1 == getHead()) head = v2;
//    else if(v2 == getHead()) head = v1;
//    if(v1 == getTail()) tail = v2;
//    else if(v2 == getTail()) tail = v1;
}

Node<int> *DoublyLinkedList::findNodePosition(int pos) {
    Node<int> *temp = head;
    int i=1;
    while(temp != nullptr){
        if(i == pos) {
            cout<<"Got the element at pos "<<i<<endl;
            return temp;
        }
        i++;
        temp = temp->next;
    }
    return nullptr;
}
//5 3 4
void DoublyLinkedList::sort() {
    bool swapped = true;

    Node<int> *cur = head;
    while(cur){
        swapped = false;
        Node<int> *temp = cur->next;
        while(temp != nullptr){
            if(temp->data < cur->data){
                int dt = temp->data;
                temp->data = cur->data;
                cur->data = dt;
                swapped = true;
            }
            temp = temp->next;
        }
        cur = cur->next;
    }
    print();
}
void DoublyLinkedList::addAtPosition(int pos, int val){
    if(pos ==0) addAtBegin(val);
    else if(pos == length+1) add(val);
    else{
        Node<int> *temp = head;
        int i=1;
        while(temp && i<=length){
            if(pos == i){
                Node<int> *newNode = new Node(val);
                newNode->next = temp->next;
                if(temp && temp->next) temp->next->prev= newNode;
                newNode->prev = temp;
                temp->next = newNode;

                length++;
                return;
            }
            temp = temp->next;
            i++;
        }
    }

}
void DoublyLinkedList::addAtMiddle(int x) {
    if(!this) {
        cout<<"Cannot add no list\n";
        return;
    }
    if(head == nullptr) {
        this->add(x);
        length++;
        return;
    }
    Node<int> *temp = head;
    int tempLength = length/2;
    addAtPosition(tempLength,x);

}
