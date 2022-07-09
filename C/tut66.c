// Function Pointers In C

Following is the example of function pointer:-

// #include <stdio.h>
// int AddNumber (int n1, int n2){
// return n1+n2;
// }
// int main()
// {
// int (*fun) (int, int);
// fun = AddNumber;
// int res1 = fun(20, 20);
// int res2 = AddNumber(20, 20);
// printf("Using function pointer: %d",res1);
// printf("\nUsing function name: %d",res2);
// return 0;
// }



#include <stdio.h>
#include <stdlib.h>

int sum(int a, int b)
{
    return a + b;
}

void greet()
{
    printf("Hello world my user good morning%d\n");
}

int main()
{
    printf("The sum of 1 and 2 is %d\n", sum(1,2)); // Testing the function
    int (*fPtr) (int, int); // Declaring a function pointer
    fPtr = ∑ // Creating a function pointer
    int d = (*fPtr)(4, 6); // Dereferencing a function pointer
    printf("The value of d is %d\n", d);
    return 0;
}