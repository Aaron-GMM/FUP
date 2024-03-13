#include <stdio.h>

int main()
{
    float v1, pp;
    char cp1;

    scanf("%f", &v1);
    scanf(" %c", &cp1);
    scanf("%f", &pp);

    if (v1 > pp)
    {
        if (cp1 == 'm')
        {
            printf("segundo");
        }
        else
        {
            printf("primeiro");
        }
    }    else if (v1 < pp)
    {
        if (cp1 == 'M')
        {
            printf("segundo");
        }
        else
        {
            printf("primeiro");
        }
    }

    return 0;
}