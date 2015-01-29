 #include <iostream>
 using namespace std;

 void display(int);
 void display(char);

 int main() {

     display(87);
     display('r');
 }

 void display(int x) {
     cout << "Were are here\n\n" << x << endl;
 }

 void display(char c) {
     cout << c << endl;
 }
