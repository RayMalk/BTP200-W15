 #include <iostream>
 using namespace std;

 const int M = 13;

 class Student
 {
 private:
     int no;
     char grade[M+1];
 public:
     Student();
     Student(int);
     Student(int, const char*);
     void display() const;
 };

 Student::Student() 
 {
    // safe empty state
    no = 0;
    grade[0] = '\0';
 }

 Student::Student(int n) 
 {
    *this = Student(n, "");
 }

 Student::Student(int n, const char* g) 
 {
     int i;
     bool valid = true; // assume valid input, check invalidity

     // validate client data
     if(n < 1)
     {
        valid = false;
     }
     else
     {
         for(i = 0; g[i] != '\0' && valid; i++)
         {
            valid = g[i] >= 'A' && g[i] <= 'F' && g[i] != 'E';
         }
     }

     if(valid)
     {
         // accept client data
         no = n;
         for(i = 0; g[i] != '\0' && i < M; i++)
         {
             grade[i] = g[i];
         }
         grade[i] = '\0';  // set the last byte to the null byte 
     }
     else 
     {
         // set to a safe empty state
         *this = Student();
     }
 }

 void Student::display() const 
 {
     cout << no << ' ' << grade;
 }

 int main(void)
 {
     Student harry(1234,"WWWWW"), mary(1235), empty;

     harry.display();
     cout << endl;
     mary.display();
     cout << endl;
     empty.display();
     cout << endl;
     
     return 0;
 }
