#include<stdio.h>
main()
{
    float f,c;
    printf("Enter the temprature in fahrenheit :\n");
    scanf("%f",&f);
    c=(f-32)*5.0/9.0;
    printf("Temprature in celcius : %f\n",c);
}
