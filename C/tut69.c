// Memory Leak In C

Memory leaks are particularly serious issues for programs. Memory leaks in C happen because of these three reasons:

we do not free the memory that is no longer needed
we do try to free the memory, but we do not have the reference to a dangling pointer.
we try to free the memory using the wrong function



To avoid memory leaks, we should always be freed the memory allocated on the heap when no longer needed. The code will look like this:

#include <stdlib.h>
void myfunc() 
{ 
   int *ptr = (int *) malloc(sizeof(int)); 
   /* Statements */
   free(ptr); 
   return; 
}




int main()
{
    int a, i = 0;
    int *i2;
    while (i < 45545)
    {
        printf("Welcome to Code With Harry\n");
        i2 = malloc(34444 * sizeof(int));
        if (i % 100 == 0)
        {
            getchar();
        }
        i++;
        free(i2); // Without this we will encounter a situation of memory leak
    }
    return 0;
}