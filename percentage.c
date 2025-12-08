#include<stdio.h>

int main()
{
float m1,m2,m3,m4,m5,sum,marks,per;
printf("\n Marks of 1st Subject is:-");
scanf("%f",& m1);

printf("\n Marks of 2nd Subject is:-");
scanf("%f",& m2);

printf("\n Marks of 3rd Subject is:-");
scanf("%f",& m3);

printf("\n Marks of 4th Subject is:-");
scanf("%f",& m4);


printf("\n Marks of 5th Subject is:-");
scanf("%f",& m5);

sum=m1+m2+m3+m4+m5;

printf("\n The Total marks obtained is:- %f",sum);
 marks=500;
 per=(sum/marks)*100;

 printf("\n The percentage obtained by student is:- %.2f",per);
 printf("%");
    return 0;
}