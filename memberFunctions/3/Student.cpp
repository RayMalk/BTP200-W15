#include <iostream>
using namespace std;
#include "Student.h"   // Programmer's world!!!

 void Student::display() const {

     cout << no << ' ' << grade;

 }
 
 void display()
 {
 	cout << "This function is not part of the student struct" << endl;
 
 }
 
  void Student::foo() const {

     ::display();
     display();
     
 }
