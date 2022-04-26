/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   LinkedQueue.h
 * Author: williamsullivan
 *
 * Created on March 10, 2020, 12:29 PM
 */

#ifndef LINKEDQUEUE1_H
#define LINKEDQUEUE1_H
#include "QueueADT.h"
#include "Node.h"


template <class T>
class LinkedQueue : QueueADT<T> {
public: 
    LinkedQueue();
    LinkedQueue(const LinkedQueue& orig);
    virtual ~LinkedQueue();
    bool dequeue();
    virtual T peekFront() const;
    bool enqueue(const T& anItem);
    bool isEmpty() const;
    
    
    
private:
    Node<T>* front;
    Node<T>* back;
    
};

#include "LinkedQueue1.cpp"
#endif /* LINKEDQUEUE1_H */

