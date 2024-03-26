#include <stdio.h>
int main()
{
    int r1, r2, r3;
    scanf("%d%d%d", &r1, &r2, &r3);

    char pos1, pos2, pos3;

    if (r1 < r2 & r1 < r3)
    {
        pos1 = 'P';
        if (r2 < r3)
        {
            pos2 = 'M';
        }
        pos3 = 'G';
    }
    else if (r2 < r1 & r2 < r3)
    {
        pos2 = 'P';
        if (r1 < r3)
        {
            pos1 = 'M';
        }
        pos3 = 'G';
    }
    else if (r3 < r1 & r3 < r2)
    {
        pos3 = "P";
        if (r1 < r2)
        {
            {

                pos1 = 'M';
            }
            pos2 = 'G';
        }
    }

    printf("%d %d %d",pos1,pos2,pos3);
}