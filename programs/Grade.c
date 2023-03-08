#include<stdio.h>
main()
{
    float m1,m2,m3,m4,m5,p;
    printf("Enter 5 subject marks: ");
    scanf("%f%f%f%f%f",&m1,&m2,&m3,&m4,&m5);
    p=(m1+m2+m3+m4+m5)/5;
    if(p>=90)
    {
        printf("Grade A");
    }
    else if(p>=80)
    {
        printf("Grade B");
    }
    else if(p>=70)
    {
        printf("Grade C");
    }
    else if(p>=60)
    {
        printf("Grade D");
    }
    else if(p>=40)
    {
        printf("Grade E");
    }
    else
    {
        printf("Grade F");
    }
}
