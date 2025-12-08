#include<stdio.h>
#include<math.h>
 main()
{
float p,r,t,SI,CI;

printf("\n The principal amount is:");
scanf("%f",& p);

printf("\n The Rate is:");
scanf("%f",& r );

printf("\n The time is:");
scanf("%f",& t);

SI=(p*r*t)/100;

 CI=p*pow((1+r/100),t)-p;

 printf("\n The simple interest is: %.2f",SI);

printf("\n The compound interest is: %.2f",CI);

}