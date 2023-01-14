//
// Created by Sivasubramani on 15/01/23.
//

#ifndef LINKEDLIST_DOUBLYLINKEDLIST_H
#define LINKEDLIST_DOUBLYLINKEDLIST_H

#include <iostream>
using namespace std;
template<typename Type>

class Node {
public:
    Type data;
    Node* prev;
    Node *next;
    Node(Type x){
        data = x;
        prev = next = nullptr;
    }
};

class DoublyLinkedList{
public:
    Node<int> *head;
    Node<int> *tail;
    int length;

    DoublyLinkedList(){
        head = tail = nullptr;
        length=0;
    }
    void add(int x);
    void addAtBegin(int x);
    bool removeFromPostion(int pos);
    bool removeByValue(int x);
    void swapThePositions();
    void print();
    void printReverse();
    int searchElement(int x);
    void swapElements(int x,int y);
    void swapElementsByPostion(int x,int y);
    Node<int>* findNode(int x);
    Node<int>* findNodePosition(int x);
    void sort();
    int getLength();
    void addAtMiddle(int x);
    void addAtPosition(int pos,int val);
    Node<int>* getHead();
    Node<int>* getTail();

};

#endif //LINKEDLIST_DOUBLYLINKEDLIST_H
