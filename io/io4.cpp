 #include <iostream>
 using namespace std;

 int main() {
     char str[11];

     cout << "\n\nLeading Whitespace" << endl;
     cout << "Enter a string : " << endl;
     cin >> str;
     cout << "|" << str << "|" << endl;
     
     cout << "\n\nTrailing Whitespace" << endl;
     cout << "Enter a string : " << endl;
     cin >> str;
     cout << "|" << str << "|" << endl;
     
     cout << "\n\nInput Extraction Using get()" << endl;
     char c, d, t[8], u[8], v;

     c = cin.get();          // extracts a single character
     cin.get(d);             // extracts a single character
     cin.get(t, 8);       // newline delimiter - accepts up to 7 chars 
                             //    and adds a null byte
     cin.ignore(2000, '\n'); // extracts the 'j' and the newline
     cin.get(u, 8, '\t'); // tab delimiter - accepts up to 7 chars and
                             //    adds a null byte
     cin.ignore();           // extracts the tab
     cin.get(v);             // extracts a single character

     cout << "c = " << c << endl;
     cout << "d = " << d << endl;
     cout << "t = " << t << endl;
     cout << "u = " << u << endl;
     cout << "v = " << v << endl;
     
     cout << "\n\nInput Extraction Using getline()" << endl;
     cin.getline(t, 8);  // newline delimiter - accepts up to 7 chars 
                              //    and adds a null byte
     cin.getline(u, 8, '\t'); // tab delimiter - accepts up to 7 chars
                              // and adds a null byte
     cin.get(v);              // extracts a single character

     cout << "t = " << t << endl;
     cout << "u = " << u << endl;
     cout << "v = " << v << endl;
     
     return 0;  
 }
