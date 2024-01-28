//Write a C program to find the sum of 2 complex numbers
#include<stdio.h>
struct _complex
{
    float real;
    float imaginary;
};
typedef struct _complex Complex;
Complex input_complex()
{
    Complex num;
    printf("Enter the real part ");
    scanf("%f",&num.real);
    printf("Enter the imaginary part ");
    scanf("%f",&num.imaginary);
    return num;
}
Complex add_complex(Complex a,Complex b)
{
    Complex sum;
    sum.real=a.real+b.real;
    sum.imaginary=a.imaginary+b.imaginary;
    return sum;
}
void output(Complex a,Complex b,Complex sum)
{
    printf("Sum of %f +%fi and %f +%fi is %f +%fi ",a.real,b.real,a.imaginary,b.imaginary,sum.real,sum.imaginary);
}
int main()
{
    Complex num1=input_complex();
    Complex num2=input_complex();
    Complex sum=add_complex(num1,num2);
    output(num1,num2,sum);
    return 0;
}