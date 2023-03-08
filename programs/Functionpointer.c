#include<stdio.h>
int add(int x,int y)
{
    int z;
    z=x+y;
    return z;
}
void math (int(*p)(int x,int y))
{
    int a;
    a=p(100,200);
    printf("%d",a);

}
main()
{
    int (*p)(int x,int y);
    p=add;
    math(p);
}
