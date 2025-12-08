#include <stdio.h>

int main(){
    int n,l=0,m,sum=0,i;
    printf("Enter the digits to find Sum ");
    scanf("%d",&n);
    m=n;

    while(n>0)
    {
        n=n/10;
        l++;
    }
    
    for(i=0; i<l; i++)
    {
        sum=sum+m%10;
        m=m/10; 
    }
    printf("The sum of digits of given Number is %d",sum);

    return 0;
}