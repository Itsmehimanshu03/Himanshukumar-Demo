#include<stdio.h>

int main()
{
float r,ar,cir;

printf("The Radius of Circle is:-");
scanf("%f",&r);

ar=3.14*r*r;
printf("\n The area of Circle is %.2f",ar);

cir=(2*3.14*r);
printf("\n The circumference of Circle is %.2f",cir);

    return 0;
}