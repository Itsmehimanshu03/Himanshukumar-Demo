#include <stdio.h>

int main(){
    int n1,n2;
    char op;
    printf("Enter the operants");
    scanf("%c",&op);
   
    printf("Enter the numbers");
    scanf("%d%d",&n1,&n2);
 
    switch (op)
    { case '+':
    printf("Sum=%d",n1+n2);
    break;
    }

    return 0;
}