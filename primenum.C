#include<stdio.h>
 
int main()
{
   int n, a = 2;
   
   scanf("%d",&n);
 
   for ( a = 2 ; a <= n - 1 ; a++ )
   {
      if ( n%a == 0 )
      {
         printf("no");
     break;
      }
   }
   if ( a == n )
      printf("yes");
       
   return 0;
}
