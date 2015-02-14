 #include <iostream>
 #include <cstring>
 using namespace std;

 class Student
 {
 private:
     int no;
     char* grade;
 public:
     Student();
     Student(const Student&);  // Copy Constructor
     Student(int, const char*);
     ~Student();
     void display() const;
 };

 Student::Student() 
 {
     no = 0;
     grade = nullptr;
 }
 
 Student::Student(const Student& src)
 {
     // shallow copy
     no = src.no;

     // allocate dynamic memory for grade string
     if (src.grade != nullptr)
     {
         grade = new char[strlen(src.grade) + 1]; 
         // copy data from the original resource
         // to newly allocated resource
         strcpy(grade, src.grade);
     }
     else
     {
         grade = nullptr;
     }
 }

 Student::Student(int n, const char* g) 
 {
     // see Current Object chapter for validation logic 
     no = n;
     // allocate dynamic memory
     grade = new char[strlen(g) + 1];
     strcpy(grade, g);
 }

 Student::~Student() 
 {
     // deallocate previously allocated memory
     delete [] grade;
 }

 void Student::display() const 
 {
     cout << no << ' ' <<
          ((grade != nullptr) ? grade : ""); 
 }

 int main(void)
 {
     Student harry(1234, "ABACA");
     
     //Student mary;
     //mary = harry;   Shallow Copy
     
     Student marry(harry);   // Deep Copy

     harry.display();
     cout << endl;
     
     return 0;
 }
