#include<stdio.h>
int sum();
int main()
{
    int k;
    k=sum();
    printf("the sum is%d",k);
}
int sum()
{
    int a,b,result;
    printf("enter the numbers");
    scanf("%d%d",&a,&b);
    result=a+b;
    return result;
}
