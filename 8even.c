#include <stdio.h>

int main(){
    int a;

    printf("Enter the given Number:");
    scanf("%d",&a);

    if (a%2==0) {
        printf("\n The no. even");
    } else { printf("\n The Given number odd");
    }
    return 0;
}