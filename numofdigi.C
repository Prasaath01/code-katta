#include <stdio.h>
#include <string.h>
 
int main()
{
    char s[200];
    int count = 0, i,a=0;
   
    
    scanf("%[^\n]s", s);
   
    for (i = 0;s[i] != '\0';i++)
    {
         a=isdigit(s[i]);
        if(a!=0)
        {
            count++; 
        }    
    }
    printf("%d", count );
    return 0;
}
