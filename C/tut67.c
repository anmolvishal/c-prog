// Callback Functions Using Function Pointers In C


 Following is the example of a callback function using a function pointer.
#include<stdio.h> 
 void A() 
{ 
    printf("I am function A\n"); 
} 
  // callback function 
void B(void (*ptr)()) 
{ 
    (*ptr) (); // callback to A 
} 
 int main() 
{ 
    void (*ptr)() = &A; 
    // calling function B and passing 
    // address of the function A as argument 
    B(ptr); 
    return 0; 
}
Output:  I am function A


#include <stdio.h>
#include <stdlib.h>

int sum (int a, int b)
{
    return a + b;
}

void greetHelloAndExecute(int (*fptr)(int, int)){
    printf("Hello user\n");
    printf("The sum of 5 and 7 is %d\n", fptr(5, 7));
    
}

void greetGmAndExecute(int (*fptr)(int, int)){
    printf("Good Morning User\n");
    printf("The sum of 5 and 7 is %d\n", fptr(5, 7));
}

int main()
{
    int (*ptr)(int, int);
    ptr = sum;
    greetHelloAndExecute(ptr);
    return 0;
}