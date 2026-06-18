#ifndef STUDENTLIST_H
#define STUDENTLIST_H

#include <string>
using namesapce std;
struct Student{
  int id;
  stirng name;
  string major;
  float gpa;
};

struct Node{
  Student data;
  Node* next;
};

class StudentList{
  private:
    Node* head;

    public:
      StudentList();
      void addStudent (Student s);
      Studnet* searchStudent(int id);
      void displayStudents();
};
#endif
