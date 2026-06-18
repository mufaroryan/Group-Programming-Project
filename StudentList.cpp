#include "StudentList.h"
#include <iostream>
using namespace std;
StudentList::StudentList(){
  head=nullptr;
}

void StudentList::addStudent(Student s){
  Node* newNode = new Node;
  newNode->data = s;
  newNode->next = nullptr;
  
  if(head == nullptr){
    head = newNode;
  }
  else{
    Node * current = head;

    while(current->next !=nullptr){
      current = current->next;
    }
    current->next = newNode;
  }
}