#include <stdio.h>

int main(){
    int n,esum=0,osum=0,i;

    printf("Enter the number:");
    scanf("%d",&n);

    for (i=1;i<=n;i++)
    if (i%2==0)
    esum=esum+i;
   
    else
    osum=osum+i;

    printf("Sum of even no. is:%d\n",esum);
    printf("Sum of Odd no. is:%d",osum);
    return 0;
}