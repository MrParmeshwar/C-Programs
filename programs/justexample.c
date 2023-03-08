#include<stdio.h>
void add(int *p,int *q)
{
    *p=*p+*p;
    *q=*q+*q;

}
main()
{
    int a,b;
    a=2;
    b=4;
    printf("\n%d %d",a,b);
    add(&a,&b);
   // printf(""&a,b);
     printf("\n%d %d",a,b);

}
