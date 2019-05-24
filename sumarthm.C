#include <stdio.h>
int main()
{
    
    int sum,a,m,e,i;
    
    sum=0;
    
    scanf("%d%d%d",&m,&a,&e);
    sum=(m*(2*a+(m-1)*e))/2;
   
    printf("%d",sum);
            
    return 0;
}
