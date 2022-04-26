/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Node.h
 * Author: clwoods1
 *
 * Created on February 18, 2020, 12:37 PM
 */

#ifndef NODE_H
#define NODE_H

template <class T>
class Node {
public:
    Node();
    Node(T anItem);
    Node(const Node& orig);
    virtual ~Node();
    
    //setters and getters
    void setItem(const T& anItem);
    void setNext(Node<T>* nextNode);
    T getItem() const;
    Node<T>* getNext() const;
    
private:
    T item;
    Node<T>* next;
};
#include "Node.cpp"
#endif /* NODE_H */

