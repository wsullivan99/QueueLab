/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   QueueExcept.cpp
 * Author: williamsullivan
 * 
 * Created on March 10, 2020, 12:52 PM
 */

#include "QueueExcept.h"

QueueExcept::QueueExcept(const std::string& msg) : logic_error(msg) {
}

