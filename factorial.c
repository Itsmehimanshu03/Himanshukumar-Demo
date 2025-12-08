#include <stdio.h>

int main(){
    int fac=1,n;

    printf("Enter the Number to Find Factorial ");
    scanf("%d",&n);

    for(int i=n; i>0; i--) 
    {
        fac=fac*i;
    }
    printf("The factorial of number %d is %d",n,fac);
    return 0;
}