#include<stdio.h>
main()
{
    float a,l,b,c;
    printf("Enter a length and breadth of rectangle \n");
    scanf("%f%f",&l,&b);
    a=l*b;
    c=2*(l+b);
    printf("Area of rectangle=%f",a);
    printf("\nPerimeter of rectangle =%f",c);
}
