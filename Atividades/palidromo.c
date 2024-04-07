#include <stdio.h>
int main(){

    int id, o, re =0,d;
    scanf("%d",&id);
    o = id;
    while (id>0)
    {
        d = id%10;
        re =re*10+d;
        id /= 10;;
    }
    if (o == re)
    {
        printf("%d",1);
    }else{
        printf("%d",0);
    }
    

    return 0;
}