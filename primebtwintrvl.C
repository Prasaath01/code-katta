#include <stdio.h>
int main()
{
    int m, n, i, flag;
    scanf("%d %d", &m, &n);

    while (m < n)
    {
        flag = 0;
         ++m;

        for(i = 2; i <= m/2; ++i)
        {
            if(m % i == 0)
            {
                flag = 1;
                break;
            }
        }

        if (flag == 0)
            printf("%d ", m);

       
    }

    return 0;
}
