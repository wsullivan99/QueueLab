/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Node.cpp
 * Author: clwoods1
 * 
 * Created on February 18, 2020, 12:37 PM
 */

#include "Node.h"
#include <iostream>
template <class T>
Node<T>::Node() : next(nullptr) {
//    next = nullptr;
//    std::cout << "Default constructor called" << std::endl;
}
template <class T>
Node<T>::Node(T anItem) 
    : item(anItem), next(nullptr) {
//    std::cout << "Overloaded constructor called for "
//            << anItem << std::endl;
}
template <class T>
Node<T>::Node(const Node& orig) {
//    std::cout << "OOPS - fix copy constructor" << std::endl;
}
template <class T>
Node<T>::~Node() {
//    std::cout << "Destroying " << item << std::endl;
}

//getter and setter
template <class T>
void Node<T>::setItem(const T& anItem) {
    item = anItem;
}
template <class T>
void Node<T>::setNext(Node<T>* nextNode) {
    next = nextNode;
}
template <class T>
T Node<T>::getItem() const {
    return item;
}
template <class T>
Node<T>* Node<T>::getNext() const {
    return next;
}
