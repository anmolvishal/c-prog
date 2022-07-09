// strcat( ):-
// int main( ) { 
// char  s[ ] = "Hello" ;
// char  t[30] = "World" ;
// strcat ( t, s ) ;
// printf ( "String = %s", t ) ;
// }
// //Output: string = HelloWorld

// strlen( ):-
// int main( ) { 
// char  str[ ] = "Harry" ;
// int  str_length;
// str_length= strlen ( str ) ;
// printf ( " length = %d", str_length );
// }
// //Output: length = 5 

// strcpy( ):-
// int main( ) { 
// char  s[ ] = "CodeWithHarry" ;
// char  t[20] ;
// strcpy ( t, s ) ;
// printf ( "\n Source string = %s", s ) ;
// printf ( "\n Target string = %s", t ) ; }
// //And here is the output...
// //Source string = CodeWithHarry
// //Target string = CodeWithHarry

// strcmp( ):-
// #include <stdio.h>
// #include <string.h>
// int main()
// {
// char string1[ ] = "Harry" ;
// char string2[ ] = "Code" ;
// int a;
// a= strcmp ( string1, string2 ) ;
// printf ("\n%d", a) ;
// return 0;
// }
// //Output:5

// strrev():-
// #include<stdio.h>
// #include<string.h>
// int main()
// {
// char str[50] = "1234";
// printf("After reversing string is =%s",strrev(str));
// return 0;}
// //Output: After reversing string is = 4321

#include <stdio.h>
#include <string.h>

int main()
{
    char s1[] = "harry";
    char s2[] = "ravi";
    char s3[54];
    printf("The strcmp for s1, s2 returned %d ", strcmp(s1, s2));
    // puts(strcat(s1, s2));
    // printf("The length of s1 is %d\n", strlen(s1));
    // printf("The length of s2 is %d\n", strlen(s2));
    // printf("The reversed string s1 is: ");
    // puts(strrev(s1));
    // printf("The reversed string s2 is: ");
    // puts(strrev(s2));

    // strcpy(s3 ,strcat(s1, s2));
    // puts(s3);
    

    // allow user to enter two strings and then concatenate them by saying that 
    // str1 is a friend of str2
    return 0;
}
