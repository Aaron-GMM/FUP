#include <stdio.h>
int main()
{

    int c1, c2, vdp;
    scanf("%d%d%d", &vdp, &c1, &c2);
    c1 = c1 - vdp;
    c2 = c2 - vdp;
    if (c1 < 0)
    {
        c1 = c1 * (-1);
    }
    if (c2 < 0)
    {

        c2 = c2 * (-1);
    }

    if (c1 < c2)
    {
        printf("primeiro");
    }
    else if (c1 == c2)
    {
        printf("empate");
    }
    else
    {
        printf("egundo");
    }

    return 0;
}