#include<stdio.h>
int main()
{
    float pi=3.14,A;
    int r;
    printf("Enter radius: ");
    scanf("%d",&r);
    A = pi*r*r;
    printf("Area of circle is %.2f having the radius %d",A,r);
    return 0; 
}