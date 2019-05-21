#include <stdio.h>
int main()
{
    char c;
    scanf("%c",&c);
    if(isalpha(c))
    {
        printf("Alphabet");
    }
    else
    {
        printf("No");
    }

    return 0;
}
