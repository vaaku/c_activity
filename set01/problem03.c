//Write a C program to add two numbers using **pass by value**
#include<stdio.h>
int input()
{
    int num;
    printf("Enter the value of of number ");
    scanf("%d",&num);
    return num;
}
int add(int a,int b)
{
    int sum;
    sum=a+b;
    return sum;
}
void output(int a,int b,int sum)
{
    printf("The sum of the numbers %d and %d is %d ",a,b,sum);
}
int main()
{
    int a,b,sum;
    a=input();
    b=input();
    sum=add(a,b);
    output(a,b,sum);
    return 0;
}
