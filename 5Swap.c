# include<stdio.h>
int main()
{
int n1,n2,n3;
printf("\n input in n1:-");
scanf("%d",&n1);

printf("\n input in n2 is:-");
scanf("%d",&n2);

n3=n1;
n1=n2;
n2=n3;

printf("\n Value of n1 %d",n1);
printf("\n Value of n2 %d",n2);
        return 0;
}