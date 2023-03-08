#include<stdio.h>
main()
{
    int arr[5],i;
    printf("Enter array ");
    for (i=0;i<5;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("\n Your array ");
    for (i=0;i<5;i++)
    {
        printf("\n%d",arr[i]);
    }
}
