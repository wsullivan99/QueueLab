/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   QueueADT.h
 * Author: williamsullivan
 *
 * Created on March 10, 2020, 12:19 PM
 */

#ifndef QUEUEADT_H
#define QUEUEADT_H

template <class T>
class QueueADT {
public:
    virtual bool isEmpty() const = 0;
    virtual bool enqueue(const T& anItem)= 0;
    virtual bool dequeue() = 0;
    virtual T peekFront() const = 0;
};

#endif /* QUEUEADT_H */

