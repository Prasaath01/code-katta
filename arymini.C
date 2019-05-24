#include <stdio.h>
 
int main()
{
    int array[100], mini, size, c, location = 1;
   
    scanf("%d", &size);
   
   
    for (c = 0; c < size; c++)
        scanf("%d", &array[c]);
   
    mini = array[0];
   
    for (c = 1; c < size; c++)
    {
        if (array[c] < mini)
        {
           mini = array[c];
           location = c+1;
        }
    }
   
    printf("%d",mini);
    return 0;
}
