#include <stdio.h>

int main()
{
    int pts = 0;
    char res;

    printf("1 - A que casa pertencia Harry Potter e seus amigos ?\n a) Hufflepuff \nb) Ravenclaw \nc) Slytherin \nd) Gryffindor ");

    scanf(" %c", &res);
    if (res == 'd')
    {
        pts++;
    }else{
        pts = 0;
    }
    printf("2 - Qual o nome verdadeiro do personagem o qual é conhecido por aquele que não deve ser nomeado ?\na) Tom Riddle\nb) Draco Malfoy\nc) Bellatrix Lestrange\nd) Pedro Pettigrew");
    scanf(" %c", &res);
    if (res == 'a')
    {
        pts++;
    }else{
        pts = 0;
    }
    
    printf("3 - Quais dessa opções não é uma Relíquia da Morte ?\na) A varinha de sabugueiro \nb) A pedra da ressurreição\nc) A pedra filosofal \nd) A capa de invisibilidade");
    scanf(" %c", &res);
    if (res == 'c')
    {
        pts++;
    }else{
        pts = 0;
    }
    

    printf("4 - O ministério da magia  proibiu o uso de três feitiços,conhecidos como as maldições imperdoáveis, por ela possuírem carátermaligno e o objetivo cruel. Marque opção abaixo que não corresponde a umas das maldições imperdoáveis:\na) Crucio \nb) Imperio\nc) Avada Kedavra\nd) Expecto Patronum ");
    scanf(" %c", &res);
    if (res == 'd')
    {
        pts++;
    }else{
        pts = 0;
    }
    

    if (pts == 0)
    {
        printf("Nunca assistiu");
    }
    else if (pts == 1)
    {
        printf("Ja ouviu falar");
    }
    else if (pts == 2)
    {
        printf("Interessado no assunto");
    }
    else if (pts == 3)
    {
        printf("Fa");
    }
    else
    {
        printf("Super Fa");
    }
}