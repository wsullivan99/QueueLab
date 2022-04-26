/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   LinkedQueue.cpp
 * Author: williamsullivan
 * 
 * Created on March 10, 2020, 12:29 PM
 */

#include "LinkedQueue1.h"
#include "QueueExcept.h"
#include <cassert>
template <class T>
LinkedQueue<T>::LinkedQueue() : front(nullptr), back(nullptr){
    
}
template <class T>
LinkedQueue<T>::LinkedQueue(const LinkedQueue& orig) 
: front(nullptr), back(nullptr)  {
    
    Node<T>* currNode = orig.front;
    while(currNode != nullptr) {
        this->enqueue(currNode->getItem());
        currNode = currNode->getNext();
    }
}
template <class T>
LinkedQueue<T>::~LinkedQueue() {
    while(front != nullptr) {
        dequeue();
    }
    assert(front == nullptr && back == nullptr);
}
template <class T>
bool LinkedQueue<T>:: dequeue() {
    if(isEmpty()) {
        throw QueueExcept("L");             
    }
    Node<T>* delNode = front;
    front = front->getNext();
    delete delNode;
    if(front == nullptr) {
        back = nullptr;
    }
    return true;
}
template <class T>
bool LinkedQueue<T>::enqueue(const T& anItem) {
    bool success = false;
    Node<T>* newNode = new Node<T>(anItem);
    if(isEmpty()) {
        front = newNode;
        back = newNode;
        success = true;
    } else {
        back->setNext(newNode);
        back = newNode;
        success = true;
    }
    //add to back
    return success;
}
template <class T>
bool LinkedQueue<T>:: isEmpty() const {
    return (front == nullptr);
}
template <class T>
T LinkedQueue<T>::peekFront() const {
    return front->getItem();
}

