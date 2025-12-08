#include <stdio.h>

// int main(){
//     int n,count=0,i;

//     printf("Enter the number");
//     scanf("%d",&n);

//     if(n==0 || n==1)

//     printf("no. is not prime");
// else
//    { for (i=1;i<=n/2;i++);
//     if(n%i==0)
//     count++;

//     if (count==0)
//     printf("No is prime");

//     else
//     printf("No is not prime");

//    }
//     return 0;
// }

int main()
{
    int i, n, count = 0;
    printf("Enter a number:");
    scanf("%d", &n);
    if (n==0 || n==1)
    printf("No is Not prime");
     else
    {for (i = 2; i < n; i++)
    {
        if (n % i == 0)
            count = count + 1;
    }
    if (count != 0)
        printf("Number is not prime");
    else
        printf("Number is prime");}
}