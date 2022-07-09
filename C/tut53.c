// #define and #include Preprocessor Directives

The syntax for using #define in the C language is:

#define constant_name value
#define constant_name (expression)

In this example, the constant named Max_length  would contain the value of 10.

#include <stdio.h>  
#define PI 3.14  
main() {  
  printf("%f",PI);  
}  