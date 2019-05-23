#include <stdio.h>
#include <math.h>

int main()
{
    int num, orgNum, rem, result = 0, n = 0 ;

    scanf("%d", &num);

     orgNum = num;
    
    while (orgNum != 0)
    {
        orgNum /= 10;
        ++n;
    }

    orgNum = num;

    while (orgNum != 0)
    {
        rem = orgNum%10;
        result += pow(rem, n);
        orgNum /= 10;
    }

    if(result == num)
        printf("yes");
    else
        printf("no");

    return 0;
}
