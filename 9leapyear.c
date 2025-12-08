//To find whether the year Is leap year or not
#include <stdio.h>

int main()
{
    int Y;
    printf("Enter the Year\n");
    scanf("%d",&Y);

    if ((Y % 400==0) || (Y % 4==0 && Y % 100 != 0 ))
    { printf("\n The year is leap Year");
    } else { printf("\n The year is not leap Year");
    }
    return 0;
}