//Write a C program to find sum of all natural numbers until _n_
#include<stdio.h>
int input_n()
{
    int n;
    printf("Enter the value of n \n");
    scanf("%d",&n);
    return n;
}
int sum_n_nos(int n)
{
    int sum=0;
    for(int i=1;i<=n;i++)
    {
        sum=sum+i;
    }
    return sum;
}
void output(int n,int sum)
{
    printf("The sum of %d natural numbers is %d ",n,sum);
}
int main()
{
    int n=input_n();
    int sum=sum_n_nos(n);
    output(n,sum);
    return 0;
}