 #include <iostream>
 using namespace std;

 void display(int);
 void display(int, int);

 int main() {

     display(6, 7);
     display(6);
     display(3, 4);
 }

 void display(int x) {
     cout << x << endl;
 }

 void display(int x, int y) {
     cout << x << " ";
     cout << y << endl;
 }
