#include <stdio.h>


int fact(int n)
{
    if(n==0||n==1) return 1;
    return n*fact(n-1);
}

int add(int a, int b)
{
    return a+b;
}

int sub(int a,int b)
{return a-b;}




int main()
{
int n=5,a=10,b=20;
printf("\nfact of %d = %d",n, fact(n));
printf("\nsum of %d & %d = %d",a,b,add(a,b));
printf("\nsub of %d & %d = %d",a,b, sub(a,b));

return 0;
}