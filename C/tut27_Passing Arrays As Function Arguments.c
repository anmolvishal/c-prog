// Examnple 
// int sum(int arr[]) {
// int sum_of_array=0;
// for (int i = 0; i<4; ++i) {
// sum_of_array += arr[i]; 
// }
// return sum_of_array; 
// }  

// int main() {   
// int result, array[] = {23,33,44,55};   
// result = sum(array);     
// printf("Result = %d", result);   
// return 0;
// } 
// Example
// void display(int *ptr) {
//  printf("%d", *ptr);
// }
// int main() {
//   int arr[] = {1, 2, 3, 4};
//   for (int i=0; i<4; i++) {
//   display(&arr[i]);
//  }
// return 0;

#include <stdio.h>

int func1(int array[])
{
    for (int i = 0; i < 4; i++)
    {
        printf("The value at %d is %d\n", i, array[i]);
    }
    // array[0] = 382; // Very important point that if you change any value here, it gets reflected in main()
    return 0;
}


void func2(int *ptr)
{
    for (int i = 0; i < 4; i++)
    {
        printf("The value at %d is %d\n", i, *(ptr + i));
    }
    *(ptr + 2) = 6534;
}


void func3(int arr[2][2])
{
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("The value at %d, %d is %d\n", i, j, arr[i][j]);
        }
    }
}


int main()
{
    int arr[][2] = {{2, 13}, {9, 3}};
    // printf("The value at index 0 is %d\n", arr[0]);
    // func1(arr);
    // printf("The value at index 0 is %d\n", arr[0]);
    // func2(arr);
    // func2(arr);
    func3(arr);
    return 0;
}
