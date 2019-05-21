#include <stdio.h>

int main()
{
   char c;
   int lwr,upr;
   scanf("%C",&c);
   if(isdigit(c)==1)
   {
       printf("Invalid");
   }
   else
   {
   lwr=(c=='a'||c=='e'||c=='i'||c=='o'||c=='u');
   upr=(c=='A'||c=='E'||c=='I'||c=='O'||c=='U');
   if(lwr||upr)
   {
       printf("Vowel");
   }
   else
   {
       printf("Consonant");
   }
   }
  
 return 0;
}
