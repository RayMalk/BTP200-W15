// Modular Example
// main.cpp

#include "main.h"
#include "transaction.h"

int main(void)
{
     int i;
     struct Transaction tr;

     for (i = 0; i < NO_TRANSACTIONS; i++)
     { 
         enter(&tr);
         display(&tr);
     }
}
