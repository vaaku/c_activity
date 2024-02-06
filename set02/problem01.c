//Write a program to find the area of a triangle.
#include<stdio.h>
void input(float *base, float *height)
{
    printf("Enter the base of the traingle ");
    scanf("%f",base);
    printf("Enter the height of the triangle ");
    scanf("%f",height);
}
void find_area(float base , float height, float *area)
{
    *area=0.5*base*height;
}
void output(float base, float height, float area)
{
    printf("The base of the triangle is %f ", base);
    printf("The height of the traingle is %f ",height);
    printf("The calculated area of the triangle is %f ", area);
}
 int main()
 {
    float base,height,area;
    input(&base,&height);
    find_area(base,height,&area);
    output(base,height,area);
    return 0;
 }