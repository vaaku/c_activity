//Write a C program to add two numbers using **pass by reference**
#include<stdio.h>
void input(int *a,int *b)
{
    printf("Enter the numbers to be added ");
    scanf("%d",a);
    printf("Enter the numbers to be added ");
    scanf("%d",b);
}
void add(int a,int b,int*sum)
{
    *sum=a+b;
}
void output(int a,int b,int sum)
{
    printf("The sum of %d and %d is %d ",a,b,sum);
}
int main()
{
    int a,b,sum;
    input(&a,&b);
    add(a,b,&sum);
    output(a,b,sum);
    return 0;
}