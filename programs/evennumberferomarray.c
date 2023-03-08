#include<stdio.h>
main()
{
    int arr[5],i;
    printf("Enter a number ");
    for(i=0;i<5;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("\n your array ");
    for (i=0;i<5;i++)
    {
        if(arr[i]%2==0)
        {
            printf("\n%d",arr[i]);
        }
    }
}
