//Write a program for declare array in c.
#include<stdio.h>
main()
{
    int arr[2],c;
    printf("Enter Array ");
    scanf("%d%d",&arr[0],&arr[1]);
    c=arr[0]+arr[1];
    printf("\n Your Array ");
    printf("\n %d\n%d",arr[0],arr[1]);
    printf("\n Addition of array=%d",c);
}
