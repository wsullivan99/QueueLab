/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: williamsullivan
 *
 * Created on March 10, 2020, 12:14 PM
 */

//#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>
#include <stdexcept>
#include <cassert>
#include "LinkedQueue1.h"

using namespace std;

const char INPUT_FILE[] = "Alamo.csv";

void loadQueue(LinkedQueue<string> &officers);
void countOff (LinkedQueue<string> officers, int number);

int main (void){

    ifstream inFile(INPUT_FILE); // declare and open the input file
    int count; 
    LinkedQueue<string> officers; // queue containing officer names
    string officerName; // name of officer in front of queue
    string firstName; // name of first officer in original queue
    loadQueue(officers);

    // Display list of officers in original queue
    cout << "Officers in original queue: " << endl;
    firstName = officers.peekFront();
    cout << firstName << endl;
    officers.dequeue();
    officers.enqueue(firstName);
    officerName = officers.peekFront();
    while (firstName != officerName){
        cout << officerName << endl;
        officers.dequeue();
        officers.enqueue(officerName);
        officerName = officers.peekFront();
    }

    // Test countOff() method using various numbers
    count = 4;
    cout << endl << endl<< "Count is: " << count << endl;
    countOff (officers, count);
//    count = 8;
//    cout << endl << endl << "Count is: " << count << endl;
//    countOff (officers, count);

    return EXIT_SUCCESS;

}

void loadQueue(LinkedQueue<string> &officers){
    ifstream inFile(INPUT_FILE); // declare and open the input file
    string officerName; // name of officer input from file
    if (!inFile)
        cout << "Error opening file for input: " << INPUT_FILE << endl;
    else{
        getline (inFile, officerName);
        while (!inFile.eof()){
            officers.enqueue(officerName);
            getline (inFile, officerName);
        }
    inFile.close();
    }
}

void countOff (LinkedQueue<string> officers, int count){
    int theCount = 1;
    string officerName;
    cout << "Officers leaving the queue are: " << endl;
    while(!officers.isEmpty()){
        officerName = officers.peekFront();
        officers.dequeue();
        if(theCount % count == 0){
            if(!officers.isEmpty()){
                cout << officerName << endl;
                theCount = 0;
            }
        }else {
            officers.enqueue(officerName);
        }
        theCount++;
    }
    cout<<"The Officer going for help is: "<<officerName<<endl;
}

