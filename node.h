#ifndef NODE_H
#define NODE_H
#include <iostream>
#include <cstring>
#include <vector>
#include "student.h"

using namespace std;

class Node {
 public:
  Node(Student* myStudent);
  ~Node();
  Node* getNext();
  void setNext(Node* nextNode); 
  Student* getStudent();
 protected:  
  Node* next;
  Student* student; 
};
#endif
