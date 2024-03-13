#include <stdio.h>

int main()
{
    int n1, n2, n3;
    scanf("%d", &n1);
    scanf("%d", &n2);
    scanf("%d", &n3);

    if  (n1 == n2 && n2 == n3)
    {
        n2 = 3;
        printf("%d",n2);
    }
    else if (n1 == n2 || n2 == n3)
    {
        n3 = 2;
        printf("%d",n3);
    }
    else
    {
        n1 = 0;
        printf("%d",n1);
    }
    return (0);
}