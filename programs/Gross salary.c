#include<stdio.h>
main()
{
    float bc,da,Gs,hra;
    printf("Enter A salary ");
    scanf("%f",&bc);
    da=20*bc/100;
    hra=40*bc/100;
    Gs=bc+da+hra;
    printf("Da=%f",da);
    printf("\nhra=%f",hra);
    printf("\nGs=%f",Gs);
}
