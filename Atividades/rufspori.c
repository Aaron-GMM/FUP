#include<stdio.h>
int ParorImpar( ){
    int result = 0;
    scanf("%d",&n1,&n2);
    result = n1+n2;
    if(result %2 == 0 ){
         result = 1;
    }else{
        result = 0;
    }

    return result
}
int main(){
    char p1 = "";
    int c = ParorImpar();
    if(p1 == "p"){
       if (c==1){
            printf("Venceu")
       }else {
           printf("Perdeu")
       }
    }else if(p1 =="i"){
         if(p1 == "p"){
       if (c==0){
            printf("Venceu")
       }else {
           printf("Perdeu")
       }
    }

}
}