#include<stdio.h>
int main(){
    int n;
    int c=0,r;
    scanf("%d",&n);
    if(n<3){
        printf("%d",0);
       
    }
    for(int i= 3; i<=n; i++){
        r = i+2;
        r +=r;
    }
    printf("%d",r);
}