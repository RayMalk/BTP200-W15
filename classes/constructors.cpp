 // Constructors
 // constructors.cpp

 #include <iostream>
 #include <cstring>
 using namespace std;
 
 const int M = 13;

 class Student
 {
 private:
     int no;
     char grade[M+1];
 public:
     Student();  // Constructor function: default constructor
     void set(int, const char*);
     void display() const;
 };

 // initializes the data members
 //
 Student::Student()
 {
     cout << "Entering constructor" << endl; 
     no = 0;
     grade[0] = '\0';
 }

 void Student::set(int n, const char* g)
 {
     no = n;
     strcpy(grade, g);
 }

 void Student::display() const
 {
     cout << no << ' ' << grade;
 }

 int main(void)
 {
     Student harry, mary;

     harry.display();
     
     mary.display();
     
     cout << endl << endl;
     harry.set(1234, "ABACA");
     mary.set(1235, "BBCDC");
     harry.display();
     cout  << endl;
     mary.display();
     cout  << endl;
	 
	 return 0;
 }
