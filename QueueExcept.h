/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   QueueExcept.h
 * Author: williamsullivan
 *
 * Created on March 10, 2020, 12:52 PM
 */

#ifndef QUEUEEXCEPT_H
#define QUEUEEXCEPT_H
#include <stdexcept>
#include <string>


class QueueExcept : public std::logic_error {
public:

    QueueExcept(const std::string& msg);

};

#endif /* QUEUEEXCEPT_H */

