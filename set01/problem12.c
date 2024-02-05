// Write a C program to find the sum of _n_ complex numbers
 #include<stdio.h>
 struct complex
 {
    float real;
    float imag;
 };

 typedef struct complex com;

 int get_n()
 {
    int n;
    printf("Number of complex number you want to add ");
    scanf("%d",&n);
    return n;
 }

 com input_complex()
 {
    com x;
    printf("Enter the real number ");
    scanf("%f",&x.real);
    printf("Enter the imaginary number ");
    scanf("%f",&x.imag);
    return x;
 }

 void input_n_complex(int n,com c[])
 {
    int i;
    for(i=0;i<n;i++)
    {
        c[i]=input_complex();
    }
 }

 com add(int n,com c[])
 {
    int i;
    com sum={0,0};
    for(i=0;i<n;i++)
    {
        sum.real=sum.real+c[i].real;
        sum.imag=sum.imag+c[i].imag;
    }
    return sum;
 }
 
 void output(com sum)
 {
    printf("The sum is %f+%fi" ,sum.real,sum.imag);
 }

 int main()
 {
    int n;
    n=get_n();
    com c[n];
    input_n_complex(n,c);
    com sum=add(n,c);
    output(sum);
    return 0;
 }
