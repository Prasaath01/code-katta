#include <stdio.h>
#include <string.h>
 
void swap(int*, int *);
 
void main()
{
    int num1, num2;
    scanf("%d %d", &num1, &num2);
    swap(&num1, &num2);    
    printf("%d %d", num1, num2);
}
 
void swap(int *x, int *y)
{
    *x = *x ^ *y;
    *y = *x ^ *y;
    *x = *x ^ *y;
}
