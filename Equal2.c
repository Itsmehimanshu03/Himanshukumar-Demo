#include <stdio.h>

int main()
{
    int n1,n2;

    printf("Enter the 1st number:");
    scanf("%d",&n1);


     printf("Enter the 2nd number:");
     scanf("%d",&n2);

    if (n1==n2) {
      printf("\n Then 1st number is equal to the 2nd Number");
    } else {
      printf("\n Then 1st number is not equal to the 2nd Number");
    }

    return 0;
}