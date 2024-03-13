#include <stdio.h>
int v1, v2, v3, v4,maiorn;
int main()
{
    scanf("%d%d%d%d", &v1,&v2, &v3, &v4);
    
    if (v1 > v2 && v1 >v3 && v1>v4){
        maiorn = v1;
    }else if (v2 > v3 && v2 >v1 && v2>v4)
    {
        maiorn = v2;
    }else if (v3 >v2 && v3>v1 && v3>v4)
    {
        maiorn = v3;
    }else
    {
        maiorn = v4;
    }

    printf("%d\n", maiorn);
    return 0;
}
