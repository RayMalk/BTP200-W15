#include <stdio.h>
 void foo(char x[]);

 int main(void)
 {
     foo(-25);
 }
 
 void foo(char x[])
 {
     printf("%s", x);
 }
