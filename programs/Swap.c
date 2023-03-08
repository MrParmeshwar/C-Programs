#include<stdio.h>
main()
{
    int a=10,b=20;
    printf("number before swapping a=%d,b=%d",a,b);

    a=a+b;
    b=a-b;
    a=a-b;
    printf("\nNumber after swapping b=%d a=%d",b,a);
}
