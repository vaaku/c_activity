//Write a C program to find the square root of a number.
#include<stdio.h>
#include<math.h>

float input()
{
    float n;
    printf("Enter the value to be square rooted ");
    scanf("%f",&n);
    return n;
}
float square_root(float n)
{
    float x=1,y=n/2;
    float p=0.000001;
    while(fabs(y-x)>p)
    {
        x=y;
        y=(x+n/x)/2;
    }
    return y;
}
void output(float n,float sqrroot)
{
    printf("The squareroot of %f is %f \n",n,sqrroot);
}
int main()
{
    float n,sqrroot;
    n=input();
    sqrroot=square_root(n);
    output(n,sqrroot);
    return 0;
}