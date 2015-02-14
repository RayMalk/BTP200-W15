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
     Student(int, const char*);
     ~Student();
     void display() const;
 };

 Student::Student() 
 {
     no = 0;
     grade = nullptr;
 }

 Student::Student(int n, const char* g) 
 {
     // see Current Object chapter for validation logic 
     no = n;
     // allocate dynamic memory
     grade = new nothrow char[strlen(g) + 1];
     strcpy(grade, g);
 }

 Student::~Student() 
 {
     // deallocate previously allocated memory
     if(grade != nullptr)
     {
        delete [] grade;
     }
 }

 void Student::display() const 
 {
     cout << no << ' ';
          //((grade != nullptr) ? grade : ""); 
     if(grade != nullptr)
     {
         cout << grade;
     }
     else
     {
         cout << "";
     }
 }

 int main(void)
 {
     Student harry(1234, "ABACA");
     
     Student mary = harry;

     harry.display();
     cout << endl;
     
     return 0;
 }
