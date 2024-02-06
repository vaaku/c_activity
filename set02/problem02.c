//Write a program to find if a triangle is scalene.
#include<stdio.h>
int input_side()
{
    int side;
    printf("Enter the side ");
    scanf("%d",&side);
    return side;
}
int check_scalene(int a, int b, int c)
{
    if(a != b && a!= c && b!= c)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
void output(int a, int b, int c, int isscalene)
{
    if(isscalene)
    {
        printf("The sides %d %d and %d are a scalene triangle ",a,b,c);
    }
    else
    {
        printf("The sides %d %d and %d are not a scalene triangle ",a,b,c);
    }
}

int main()
{
    int a,b,c;
    a=input_side();
    b=input_side();
    c=input_side();
    int isscalene=check_scalene(a,b,c);
    output(a,b,c,isscalene);
    return 0;
}