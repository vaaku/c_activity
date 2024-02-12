//Write a program find whether a number is a composite number
#include<stdio.h>
int input_numbers()
{
    int n;
    printf("Enter a number ");
    scanf("%d",&n);
    return n;
}
int is_composite(int n)
{
    for (int i=2;i<n;i++)
    {
        if(n%i ==0)
        {
            return 1;
        }
        else
        {
            return 2;
        }
    }
}
void output(int n,int result)
{
    if(result==1)
    {
        printf("The entered number is not a composite number ");
    }
    else
    {
        printf("The entered number is a composite number ");

    }
}
int main()
{
    int n=input_numbers();
    int result=is_composite(n);
    output(n,result);
    return 0; 
}