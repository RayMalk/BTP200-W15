 // Constructors and Destructors
 // destructors.cpp

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
     Student();   // default constructor
     ~Student();  // destructor
     void set(int n, const char* g);
     void display() const;
 };

 Student::Student()
 {
     cout << "Entering constructor" << endl; 
     no = 0;
     grade[0] = '\0';
 }

 // executed before object goes out of scope 
 //
 Student::~Student()
 {
    cout << "Entering destructor for " << no
         << endl;
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

     harry.set(1234, "ABACA");
     mary.set(1235, "BBCDC");
     
     harry.display();
     cout  << endl;
     mary.display();
     cout  << endl;
	 
	 return 0;
 }
 
 
