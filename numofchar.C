#include<stdio.h>
       

       void main()
       {

              char str[50];
              int i,count=0;

              gets(str);
              
              for(i=0;str[i];i++)
                     if(str[i] != ' ')
                           count++;
              
              printf("%d",count);

              getch();
    }
